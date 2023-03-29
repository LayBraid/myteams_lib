#include "stdio.h"
#include "../include/logging_client.h"

int client_event_logged_in(char const *user_uuid, const char *user_name)
{
    printf("client_event_logged_in: %s %s", user_uuid, user_name);
    return 0;
}

int client_event_logged_out(char const *user_uuid, const char *user_name)
{
    printf("client_event_logged_out: %s %s", user_uuid, user_name);
    return 0;
}

int client_event_private_message_received(
        char const *user_uuid,
        char const *message_body)
{
    printf("client_event_private_message_received: %s %s", user_uuid, message_body);
    return 0;
}

int client_event_thread_reply_received(
        char const *team_uuid,
        char const *thread_uuid,
        char const *user_uuid,
        char const *reply_body)
{
    printf("client_event_thread_reply_received: %s %s %s %s", team_uuid, thread_uuid, user_uuid, reply_body);
    return 0;
}

int client_event_team_created(
        char const *team_uuid,
        char const *team_name,
        char const *team_description)
{
    printf("client_event_team_created: %s %s %s", team_uuid, team_name, team_description);
    return 0;
}

int client_event_channel_created(
        char const *channel_uuid,
        char const *channel_name,
        char const *channel_description)
{
    printf("client_event_channel_created: %s %s %s", channel_uuid, channel_name, channel_description);
    return 0;
}

int client_event_thread_created(
        char const *thread_uuid,
        char const *user_uuid,
        time_t thread_timestamp,
        char const *thread_title,
        char const *thread_body)
{
    printf("client_event_thread_created: %s %s %ld %s %s", thread_uuid, user_uuid, thread_timestamp, thread_title, thread_body);
    return 0;
}

int client_print_users(
        char const *user_uuid,
        char const *user_name,
        int user_status)
{
    printf("client_print_users: %s %s %d", user_uuid, user_name, user_status);
    return 0;
}

int client_print_teams(
        char const *team_uuid,
        char const *team_name,
        char const *team_description)
{
    printf("client_print_teams: %s %s %s", team_uuid, team_name, team_description);
    return 0;
}

int client_team_print_channels(
        char const *channel_uuid,
        char const *channel_name,
        char const *channel_description)
{
    printf("client_team_print_channels: %s %s %s", channel_uuid, channel_name, channel_description);
    return 0;
}

int client_channel_print_threads(
        char const *thread_uuid,
        char const *user_uuid,
        time_t thread_timestamp,
        char const *thread_title,
        char const *thread_body)
{
    printf("client_channel_print_threads: %s %s %ld %s %s", thread_uuid, user_uuid, thread_timestamp, thread_title, thread_body);
    return 0;
}

int client_thread_print_replies(
        char const *thread_uuid,
        char const *user_uuid,
        time_t reply_timestamp,
        char const *reply_body)
{
    printf("client_thread_print_replies: %s %s %ld %s", thread_uuid, user_uuid, reply_timestamp, reply_body);
    return 0;
}

int client_private_message_print_messages(
        char const *sender_uuid,
        time_t message_timestamp,
        char const *message_body)
{
    printf("client_private_message_print_messages: %s %ld %s", sender_uuid, message_timestamp, message_body);
    return 0;
}

int client_error_unknown_team(char const *team_uuid)
{
    printf("client_error_unknown_team: %s", team_uuid);
    return 0;
}

int client_error_unknown_channel(char const *channel_uuid)
{
    printf("client_error_unknown_channel: %s", channel_uuid);
    return 0;
}

int client_error_unknown_thread(char const *thread_uuid)
{
    printf("client_error_unknown_thread: %s", thread_uuid);
    return 0;
}

int client_error_unknown_user(char const *user_uuid)
{
    printf("client_error_unknown_user: %s", user_uuid);
    return 0;
}

int client_error_unauthorized(void)
{
    printf("client_error_unauthorized");
    return 0;
}

int client_error_already_exist(void)
{
    printf("client_error_already_exist");
    return 0;
}

int client_print_user(
        char const *user_uuid,
        char const *user_name,
        int user_status)
{
    printf("client_print_user: %s %s %d", user_uuid, user_name, user_status);
    return 0;
}

int client_print_team(
        char const *team_uuid,
        char const *team_name,
        char const *team_description)
{
    printf("client_print_team: %s %s %s", team_uuid, team_name, team_description);
    return 0;
}

int client_print_channel(
        char const *channel_uuid,
        char const *channel_name,
        char const *channel_description)
{
    printf("client_print_channel: %s %s %s", channel_uuid, channel_name, channel_description);
    return 0;
}

int client_print_thread(
        char const *thread_uuid,
        char const *user_uuid,
        time_t thread_timestamp,
        char const *thread_title,
        char const *thread_body)
{
    printf("client_print_thread: %s %s %ld %s %s", thread_uuid, user_uuid, thread_timestamp, thread_title, thread_body);
    return 0;
}

int client_print_team_created(
        char const *team_uuid,
        char const *team_name,
        char const *team_description)
{
    printf("client_print_team_created: %s %s %s", team_uuid, team_name, team_description);
    return 0;
}

int client_print_channel_created(
        char const *channel_uuid,
        char const *channel_name,
        char const *channel_description)
{
    printf("client_print_channel_created: %s %s %s", channel_uuid, channel_name, channel_description);
    return 0;
}

int client_print_thread_created(
        char const *thread_uuid,
        char const *user_uuid,
        time_t thread_timestamp,
        char const *thread_title,
        char const *thread_body)
{
    printf("client_print_thread_created: %s %s %ld %s %s", thread_uuid, user_uuid, thread_timestamp, thread_title, thread_body);
    return 0;
}

int client_print_reply_created(
        char const *thread_uuid,
        char const *user_uuid,
        time_t reply_timestamp,
        char const *reply_body)
{
    printf("client_print_reply_created: %s %s %ld %s", thread_uuid, user_uuid, reply_timestamp, reply_body);
    return 0;
}

int client_print_subscribed(char const *user_uuid, char const *team_uuid)
{
    printf("client_print_subscribed: %s %s", user_uuid, team_uuid);
    return 0;
}

int client_print_unsubscribed(char const *user_uuid, char const *team_uuid)
{
    printf("client_print_unsubscribed: %s %s", user_uuid, team_uuid);
    return 0;
}
