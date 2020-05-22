#ifndef COCKER_IN_H_INCLUDED
#define COCKER_IN_H_INCLUDED

#include "cocker_util.h"

#ifdef __cplusplus
extern "C" {
#endif // __cplusplus

struct CockerVolume
{
    char *host_path;
    int host_path_len;
    char *container_path;

    struct list_head volume_node;
};


struct CommandParameter
{
    char *_action;
    char *_show;

    char *__version;
    char *__image;
    char *__container;

};


struct CockerEnvironment
{
    struct CommandParameter cmd_para;
    unsigned char cgroup_enable;



};


#ifdef __cplusplus
}
#endif // __cplusplus


#endif // COCKER_IN_H_INCLUDED
