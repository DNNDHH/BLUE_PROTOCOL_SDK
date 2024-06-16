#pragma once

 

// Package: BP_PlayerLevelStartSequenceTaskLibraryLogLoad

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "SkyBlue_structs.hpp"
#include "SkyBlue_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_PlayerLevelStartSequenceTaskLibraryLogLoad.BP_PlayerLevelStartSequenceTaskLibraryLogLoad_C
// 0x0030 (0x0060 - 0x0030)
class UBP_PlayerLevelStartSequenceTaskLibraryLogLoad_C final : public USBPlayerLevelStartSequenceTaskBase
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0030(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class ASBPlayerController*                    Controller;                                        // 0x0038(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USBCharactersLogComponent*              LogComponent;                                      // 0x0040(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USBPlayerAchievementComponent*          AchievementComponent;                              // 0x0048(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USBTheaterComponent*                    TheaterComponent;                                  // 0x0050(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         PictureBookAPICount;                               // 0x0058(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_BP_PlayerLevelStartSequenceTaskLibraryLogLoad(int32 EntryPoint);
	void GetIdListCallback(bool WasSuccessful, int32 RetCode, const ESBLibraryPictureBookType Type);
	void OnLoadAchievementDataDelegate_Event(const bool Result, const int32 RetCode);
	void CustomEvent_0(const bool Result, const int32 RetCode, const TArray<class FName>& DemoList);
	void OnLoadAchivementDelegate_event(const bool Result, const TArray<struct FSBAchievementInfo>& AchievementList);
	void EnemyLogLoaded(bool Result);
	void Start();
	void UpdateDemoList();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_PlayerLevelStartSequenceTaskLibraryLogLoad_C">();
	}
	static class UBP_PlayerLevelStartSequenceTaskLibraryLogLoad_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBP_PlayerLevelStartSequenceTaskLibraryLogLoad_C>();
	}
};
static_assert(alignof(UBP_PlayerLevelStartSequenceTaskLibraryLogLoad_C) == 0x000008, "Wrong alignment on UBP_PlayerLevelStartSequenceTaskLibraryLogLoad_C");
static_assert(sizeof(UBP_PlayerLevelStartSequenceTaskLibraryLogLoad_C) == 0x000060, "Wrong size on UBP_PlayerLevelStartSequenceTaskLibraryLogLoad_C");
static_assert(offsetof(UBP_PlayerLevelStartSequenceTaskLibraryLogLoad_C, UberGraphFrame) == 0x000030, "Member 'UBP_PlayerLevelStartSequenceTaskLibraryLogLoad_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UBP_PlayerLevelStartSequenceTaskLibraryLogLoad_C, Controller) == 0x000038, "Member 'UBP_PlayerLevelStartSequenceTaskLibraryLogLoad_C::Controller' has a wrong offset!");
static_assert(offsetof(UBP_PlayerLevelStartSequenceTaskLibraryLogLoad_C, LogComponent) == 0x000040, "Member 'UBP_PlayerLevelStartSequenceTaskLibraryLogLoad_C::LogComponent' has a wrong offset!");
static_assert(offsetof(UBP_PlayerLevelStartSequenceTaskLibraryLogLoad_C, AchievementComponent) == 0x000048, "Member 'UBP_PlayerLevelStartSequenceTaskLibraryLogLoad_C::AchievementComponent' has a wrong offset!");
static_assert(offsetof(UBP_PlayerLevelStartSequenceTaskLibraryLogLoad_C, TheaterComponent) == 0x000050, "Member 'UBP_PlayerLevelStartSequenceTaskLibraryLogLoad_C::TheaterComponent' has a wrong offset!");
static_assert(offsetof(UBP_PlayerLevelStartSequenceTaskLibraryLogLoad_C, PictureBookAPICount) == 0x000058, "Member 'UBP_PlayerLevelStartSequenceTaskLibraryLogLoad_C::PictureBookAPICount' has a wrong offset!");

}

