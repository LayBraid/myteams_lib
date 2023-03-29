#include "stdio.h"
#include "../include/logging_server.h"

int server_event_team_created(
        char const *team_uuid,
        char const *team_name,
        char const *user_uuid)
{
    printf("server_event_team_created: %s %s %s", team_uuid, team_name, user_uuid);
    return 0;
}

int server_event_channel_created(
        char const *team_uuid,
        char const *channel_uuid,
        char const *channel_name)
{
    printf("server_event_channel_created: %s %s %s", team_uuid, channel_uuid, channel_name);
    return 0;
}

int server_event_thread_created(
        char const *channel_uuid,
        char const *thread_uuid,
        char const *user_uuid,
        char const *thread_title,
        char const *thread_body)
{
    printf("server_event_thread_created: %s %s %s %s %s", channel_uuid, thread_uuid, user_uuid, thread_title, thread_body);
    return 0;
}

int server_event_reply_created(
        char const *thread_uuid,
        char const *user_uuid,
        char const *reply_body)
{
    printf("server_event_reply_created: %s %s %s", thread_uuid, user_uuid, reply_body);
    return 0;
}

int server_event_user_subscribed(char const *team_uuid, char const *user_uuid)
{
    printf("server_event_user_subscribed: %s %s", team_uuid, user_uuid);
    return 0;
}

int server_event_user_unsubscribed(char const *team_uuid, char const *user_uuid)
{
    printf("server_event_user_unsubscribed: %s %s", team_uuid, user_uuid);
    return 0;
}

int server_event_user_created(char const *user_uuid, char const *user_name)
{
    printf("server_event_user_created: %s %s", user_uuid, user_name);
    return 0;
}

int server_event_user_loaded(char const *user_uuid, char const *user_name)
{
    printf("server_event_user_loaded: %s %s", user_uuid, user_name);
    return 0;
}

int server_event_user_logged_in(char const *user_uuid)
{
    printf("server_event_user_logged_in: %s", user_uuid);
    return 0;
}

int server_event_user_logged_out(char const *user_uuid)
{
    printf("server_event_user_logged_out: %s", user_uuid);
    return 0;
}

int server_event_private_message_sended(
        char const *sender_uuid,
        char const *receiver_uuid,
        char const *message_body)
{
    printf("server_event_private_message_sended: %s %s %s", sender_uuid, receiver_uuid, message_body);
    return 0;
}