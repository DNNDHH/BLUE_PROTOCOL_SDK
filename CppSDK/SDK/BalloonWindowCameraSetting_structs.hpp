#pragma once

 

// Package: BalloonWindowCameraSetting

#include "Basic.hpp"


namespace SDK
{

// UserDefinedStruct BalloonWindowCameraSetting.BalloonWindowCameraSetting
// 0x000C (0x000C - 0x0000)
struct FBalloonWindowCameraSetting final
{
public:
	class FName                                   SocketName_5_5179A8C0414F6E4A04453B8EC9C0D6B5;     // 0x0000(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         Fov_7_8CC5E508415A8A385AD424B5E5185A9C;            // 0x0008(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(FBalloonWindowCameraSetting) == 0x000004, "Wrong alignment on FBalloonWindowCameraSetting");
static_assert(sizeof(FBalloonWindowCameraSetting) == 0x00000C, "Wrong size on FBalloonWindowCameraSetting");
static_assert(offsetof(FBalloonWindowCameraSetting, SocketName_5_5179A8C0414F6E4A04453B8EC9C0D6B5) == 0x000000, "Member 'FBalloonWindowCameraSetting::SocketName_5_5179A8C0414F6E4A04453B8EC9C0D6B5' has a wrong offset!");
static_assert(offsetof(FBalloonWindowCameraSetting, Fov_7_8CC5E508415A8A385AD424B5E5185A9C) == 0x000008, "Member 'FBalloonWindowCameraSetting::Fov_7_8CC5E508415A8A385AD424B5E5185A9C' has a wrong offset!");

}

