#include <ros/ros.h>
#include <arithmetic_node/arithmetic_reply.h>
#include <message_ui/sent_msg.h>
#include <string>

using namespace std;

//Add your code here
ros::Publisher arithmetician;

void talkMathToMe(const message_ui::sent_msg msg)
{

    arithmetic_node::arithmetic_reply reply;


    int secondNumber;
    int cc = 0;
    while (isdigit(msg.message[cc])) {
        cc++
    }
    int operatorLocation = cc;
    int firstNumber = atoi(msg.message.substr(0,operatorLocation-1));
    int secondNumber = atoi(msg.message.substr(operatorLocation+1,msg.message.length));

    reply.oper_type = msg.message[operatorLocation]);

    switch (reply.oper_type) {
    case "+" :
        reply.answer = firstNumber + secondNumber;
        break;
    case "-" :
        reply.answer = firstNumber - secondNumber;
        break;
    case "/" :
        reply.answer = (float)firstNumber / (float)secondNumber;
        break;
    case "*" :
        reply.answer = firstNumber * secondNumber;
        break;
    }

    arithmetician.publish(reply);
//    //ROS_INFO("I heard: ")
//    chatbot_node::reply_msg yoohoo;
//
//    if (msg.message.compare("Hello") == 0) {
//        string name;
//        ros::param::get("name",name);
//        yoohoo.message = "Hello, " + name;
//
//    } else if (msg.message.compare("What is your name?") == 0) {
//        yoohoo.message = "My name is MRSD Siri";
//    } else if (msg.message.compare("How are you?") == 0) {
//        yoohoo.message = "I am fine, thank you.";
//    } else {
//        yoohoo.message = "I'm sorry, please say something I can understand.";
//    }
//
//    //{
//    //    yoohoo.message = "yoohoo";
//    //}
//
//
//    //cout<<"yoohoo\n";
//    //yoohoo.message = "yoohoo";
//
//    chatpub.publish(yoohoo);
//
//
}


int main(int argc, char **argv) {

  ros::init(argc, argv, "arithmetic_node");
  ros::NodeHandle n;

  //Add your code here
  arithmetician = n.advertise<arithmetic_node::arithmetic_reply>("arithmetic_reply", 1000);

  ros::Subscriber sub = n.subscribe<message_ui::sent_msg>("sent_msg", 1000, talkMathToMe);

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
