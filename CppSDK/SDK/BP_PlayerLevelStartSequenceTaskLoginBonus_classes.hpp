#pragma once

 

// Package: BP_PlayerLevelStartSequenceTaskLoginBonus

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "SkyBlue_structs.hpp"
#include "SkyBlue_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_PlayerLevelStartSequenceTaskLoginBonus.BP_PlayerLevelStartSequenceTaskLoginBonus_C
// 0x0030 (0x0060 - 0x0030)
class UBP_PlayerLevelStartSequenceTaskLoginBonus_C final : public USBPlayerLevelStartSequenceTaskBase
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0030(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class USBLoginBonusWindow*                    LoginBonusWidget;                                  // 0x0038(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USBPlayerLoginBonusComponent*           LoginBonusComponent;                               // 0x0040(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class FString>                         ActiveIdList;                                      // 0x0048(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                          IsActiveCheckTask;                                 // 0x0058(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          OpenLoginBonusWindow;                              // 0x0059(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          LockLoadingScreen;                                 // 0x005A(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

public:
	void ExecuteUbergraph_BP_PlayerLevelStartSequenceTaskLoginBonus(int32 EntryPoint);
	void Finish();
	void OnCharacterJoinExtDelegate______0(const int32 InRetCode);
	void Start();
	void PreStart();
	void CheckCompleteFunc(const bool bWasSuccessful, const int32 ErrorCode);
	void OnFinishEvent();
	void ActiveCheckRequest(bool IsFinish);
	void GetDetailWork(const bool bWasSuccessful, const int32 ErrorCode);
	void ActiveCompletefunc(const bool bWasSuccessful, const int32 ErrorCode);
	void OnLoaded_9C8A3A574D92EE195DA83A82A8920833(TSubclassOf<class UObject> Loaded);
	void Lock_Loading_Screen(bool Lock);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_PlayerLevelStartSequenceTaskLoginBonus_C">();
	}
	static class UBP_PlayerLevelStartSequenceTaskLoginBonus_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBP_PlayerLevelStartSequenceTaskLoginBonus_C>();
	}
};
static_assert(alignof(UBP_PlayerLevelStartSequenceTaskLoginBonus_C) == 0x000008, "Wrong alignment on UBP_PlayerLevelStartSequenceTaskLoginBonus_C");
static_assert(sizeof(UBP_PlayerLevelStartSequenceTaskLoginBonus_C) == 0x000060, "Wrong size on UBP_PlayerLevelStartSequenceTaskLoginBonus_C");
static_assert(offsetof(UBP_PlayerLevelStartSequenceTaskLoginBonus_C, UberGraphFrame) == 0x000030, "Member 'UBP_PlayerLevelStartSequenceTaskLoginBonus_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UBP_PlayerLevelStartSequenceTaskLoginBonus_C, LoginBonusWidget) == 0x000038, "Member 'UBP_PlayerLevelStartSequenceTaskLoginBonus_C::LoginBonusWidget' has a wrong offset!");
static_assert(offsetof(UBP_PlayerLevelStartSequenceTaskLoginBonus_C, LoginBonusComponent) == 0x000040, "Member 'UBP_PlayerLevelStartSequenceTaskLoginBonus_C::LoginBonusComponent' has a wrong offset!");
static_assert(offsetof(UBP_PlayerLevelStartSequenceTaskLoginBonus_C, ActiveIdList) == 0x000048, "Member 'UBP_PlayerLevelStartSequenceTaskLoginBonus_C::ActiveIdList' has a wrong offset!");
static_assert(offsetof(UBP_PlayerLevelStartSequenceTaskLoginBonus_C, IsActiveCheckTask) == 0x000058, "Member 'UBP_PlayerLevelStartSequenceTaskLoginBonus_C::IsActiveCheckTask' has a wrong offset!");
static_assert(offsetof(UBP_PlayerLevelStartSequenceTaskLoginBonus_C, OpenLoginBonusWindow) == 0x000059, "Member 'UBP_PlayerLevelStartSequenceTaskLoginBonus_C::OpenLoginBonusWindow' has a wrong offset!");
static_assert(offsetof(UBP_PlayerLevelStartSequenceTaskLoginBonus_C, LockLoadingScreen) == 0x00005A, "Member 'UBP_PlayerLevelStartSequenceTaskLoginBonus_C::LockLoadingScreen' has a wrong offset!");

}
