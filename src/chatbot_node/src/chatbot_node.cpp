#include <ros/ros.h>
#include <chatbot_node/reply_msg.h>
#include <message_ui/sent_msg.h>
#include <string>

using namespace std;

//Add your code here
ros::Publisher chatpub;

void talkToMe(const message_ui::sent_msg msg)
{
    //ROS_INFO("I heard: ")
    chatbot_node::reply_msg yoohoo;

    if (msg.message.compare("Hello") == 0) {
        string name;
        ros::param::get("name",name);
        yoohoo.message = "Hello, " + name;
        chatpub.publish(yoohoo);

    } else if (msg.message.compare("What is your name?") == 0) {
        yoohoo.message = "My name is MRSD Siri";
        chatpub.publish(yoohoo);
    } else if (msg.message.compare("How are you?") == 0) {
        yoohoo.message = "I am fine, thank you.";
        chatpub.publish(yoohoo);
    } //else {
        //yoohoo.message = "I'm sorry, please say something I can understand.";
    //}

    //{
    //    yoohoo.message = "yoohoo";
    //}


    //cout<<"yoohoo\n";
    //yoohoo.message = "yoohoo";




}


int main(int argc, char **argv) {

  ros::init(argc, argv, "chatbot_node");
  ros::NodeHandle n;

  //Add your code here
  chatpub = n.advertise<chatbot_node::reply_msg>("reply_msg", 1000);

  ros::Subscriber sub = n.subscribe<message_ui::sent_msg>("sent_msg", 1000, talkToMe);

  ros::Rate loop_rate(20);


  //int counter = 0;
  while(ros::ok()) {
    //chatbot_node/reply_msg::String msg;
    //string<<"hello world " << counter;

    //chatbot.publish(msg);

    //ROS_INFO("%s", msg.data.c_str());

    ros::spinOnce();
    loop_rate.sleep();
  }

  return 0;
}
