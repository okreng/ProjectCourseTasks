#include <ros/ros.h>
#include <chatbot_node/reply_msg.h>
#include <message_ui/sent_msg.h>
#include <counter_node/counter.h>
#include <arithmetic_node/arithmetic_reply.h>

int num_reply_msg = 0;
int num_sent_msg = 0;

ros::Time last_sent_msg_time;
ros::Time last_reply_msg_time;

ros::Subscriber reply_msg_sub;
ros::Subscriber arithmetic_reply_msg_sub;
ros::Subscriber sent_msg_sub;

void sent_msg_callback(const message_ui::sent_msg msg)
{
	num_sent_msg++;
	//last_sent_msg_time = ros::Time::now();
	last_sent_msg_time = msg.header.stamp;
}

void reply_msg_callback(const chatbot_node::reply_msg msg)
{
	num_reply_msg++;
	//last_reply_msg_time = ros::Time::now();
	last_reply_msg_time = msg.header.stamp;
}

 void arithmetic_reply_msg_callback(const arithmetic_node::arithmetic_reply msg)
 {
 	num_reply_msg++;
 	last_reply_msg_time = msg.header.stamp;
 }
bool whichCallBack(counter_node::counter::Request &req, counter_node::counter::Response &res)
{

    switch (req.req_id) {
        case 0 :
            res.reply = num_reply_msg + num_sent_msg;
            break;
         case 1 :
            res.reply = num_reply_msg;
            break;
         case 2 :
            res.reply = num_sent_msg;
            break;
         case 3 :
            res.reply = -(last_reply_msg_time.toSec() - ros::Time::now().toSec());
            break;
         case 4 :
            res.reply = -(last_sent_msg_time.toSec() - ros::Time::now().toSec());
            break;
    }


    return true;

}


int main(int argc, char **argv) {

  ros::init(argc, argv, "counter_node");
  ros::NodeHandle n;

  ros::ServiceServer service = n.advertiseService("message_counter", whichCallBack);

  reply_msg_sub = n.subscribe("reply_msg", 1000, reply_msg_callback);
  sent_msg_sub = n.subscribe("sent_msg", 1000, sent_msg_callback);
  arithmetic_reply_msg_sub = n.subscribe("arithmetic_reply", 1000, arithmetic_reply_msg_callback);


  ros::Rate loop_rate(20);

  while(ros::ok()) {
    ros::spinOnce();
    loop_rate.sleep();
  }

  return 0;
}
