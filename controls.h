/*controls */
int v1o();
int v1c();
int v2o();
int v2c();
int cmd = 1;



valve1open()
    {
      printf("open N0\n");
      MQTTClient_publishMessage(client, TOPIC, &pubmsg, &token);

      printf("open N1\n");
      MQTTClient_publishMessage(client, TOPIC, &pubmsg, &token);

      printf("open v1\n");
      MQTTClient_publishMessage(client, TOPIC, &pubmsg, &token);

      printf("close n0\n");
      MQTTClient_publishMessage(client, TOPIC, &pubmsg, &token);

      printf("close v2\n");
      MQTTClient_publishMessage(client, TOPIC, &pubmsg, &token);
    
   }