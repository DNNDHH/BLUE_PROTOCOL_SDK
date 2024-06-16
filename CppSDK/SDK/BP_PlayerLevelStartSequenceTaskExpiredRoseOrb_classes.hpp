#pragma once

 

// Package: BP_PlayerLevelStartSequenceTaskExpiredRoseOrb

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "SkyBlue_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_PlayerLevelStartSequenceTaskExpiredRoseOrb.BP_PlayerLevelStartSequenceTaskExpiredRoseOrb_C
// 0x0038 (0x0068 - 0x0030)
class UBP_PlayerLevelStartSequenceTaskExpiredRoseOrb_C final : public USBPlayerLevelStartSequenceTaskBase
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0030(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class USBLoginBonusWindow*                    LoginBonusWidget;                                  // 0x0038(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USBPlayerLoginBonusComponent*           LoginBonusComponent;                               // 0x0040(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class FString>                         ActiveIdList;                                      // 0x0048(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                          IsActiveCheckTask;                                 // 0x0058(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1D27[0x7];                                     // 0x0059(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USBRmShopComponent*                     RmShopComponent;                                   // 0x0060(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_BP_PlayerLevelStartSequenceTaskExpiredRoseOrb(int32 EntryPoint);
	void _________0(const bool Result, const int32 RetCode, const struct FSBCryptoCurrency& Cryptocurrency);
	void Start();
	void ActiveCheckRequest(bool IsFinish);
	void GetDetailWork(const bool bWasSuccessful, const int32 ErrorCode);
	void ActiveCompletefunc(const bool bWasSuccessful, const int32 ErrorCode);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_PlayerLevelStartSequenceTaskExpiredRoseOrb_C">();
	}
	static class UBP_PlayerLevelStartSequenceTaskExpiredRoseOrb_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBP_PlayerLevelStartSequenceTaskExpiredRoseOrb_C>();
	}
};
static_assert(alignof(UBP_PlayerLevelStartSequenceTaskExpiredRoseOrb_C) == 0x000008, "Wrong alignment on UBP_PlayerLevelStartSequenceTaskExpiredRoseOrb_C");
static_assert(sizeof(UBP_PlayerLevelStartSequenceTaskExpiredRoseOrb_C) == 0x000068, "Wrong size on UBP_PlayerLevelStartSequenceTaskExpiredRoseOrb_C");
static_assert(offsetof(UBP_PlayerLevelStartSequenceTaskExpiredRoseOrb_C, UberGraphFrame) == 0x000030, "Member 'UBP_PlayerLevelStartSequenceTaskExpiredRoseOrb_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UBP_PlayerLevelStartSequenceTaskExpiredRoseOrb_C, LoginBonusWidget) == 0x000038, "Member 'UBP_PlayerLevelStartSequenceTaskExpiredRoseOrb_C::LoginBonusWidget' has a wrong offset!");
static_assert(offsetof(UBP_PlayerLevelStartSequenceTaskExpiredRoseOrb_C, LoginBonusComponent) == 0x000040, "Member 'UBP_PlayerLevelStartSequenceTaskExpiredRoseOrb_C::LoginBonusComponent' has a wrong offset!");
static_assert(offsetof(UBP_PlayerLevelStartSequenceTaskExpiredRoseOrb_C, ActiveIdList) == 0x000048, "Member 'UBP_PlayerLevelStartSequenceTaskExpiredRoseOrb_C::ActiveIdList' has a wrong offset!");
static_assert(offsetof(UBP_PlayerLevelStartSequenceTaskExpiredRoseOrb_C, IsActiveCheckTask) == 0x000058, "Member 'UBP_PlayerLevelStartSequenceTaskExpiredRoseOrb_C::IsActiveCheckTask' has a wrong offset!");
static_assert(offsetof(UBP_PlayerLevelStartSequenceTaskExpiredRoseOrb_C, RmShopComponent) == 0x000060, "Member 'UBP_PlayerLevelStartSequenceTaskExpiredRoseOrb_C::RmShopComponent' has a wrong offset!");

}

