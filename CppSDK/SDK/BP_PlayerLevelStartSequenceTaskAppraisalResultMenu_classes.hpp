#pragma once

 

// Package: BP_PlayerLevelStartSequenceTaskAppraisalResultMenu

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "SkyBlue_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_PlayerLevelStartSequenceTaskAppraisalResultMenu.BP_PlayerLevelStartSequenceTaskAppraisalResultMenu_C
// 0x0018 (0x0048 - 0x0030)
class UBP_PlayerLevelStartSequenceTaskAppraisalResultMenu_C final : public USBPlayerLevelStartSequenceTaskBase
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0030(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	int32                                         CountToStart;                                      // 0x0038(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          LockLoadingScreen;                                 // 0x003C(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_91A8[0x3];                                     // 0x003D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class USBPlayerStorageComponent*              StorageComponent;                                  // 0x0040(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_BP_PlayerLevelStartSequenceTaskAppraisalResultMenu(int32 EntryPoint);
	void Finish();
	void OnCharacterJoinExtDelegate______0(const int32 InRetCode);
	void ItemAppraisalResultEnd();
	void OnCompleted(bool IsSuccessed);
	void PreStart();
	void CreateItemAppraisalResult(class USBOwnItemListContainer* InMovedUnidentifiedItems, class USBOwnItemListContainer* InMovedAppraisedItems, class USBOwnItemListContainer* InSaleUnidentifiedItems, class USBOwnItemListContainer* InSaleAppraisedItems, int32 InSalePrice);
	void CustomEvent_1(bool IsSuccessed);
	void OnLoaded_ACAD67A74D6CD4CCF910F3A4702E70BC(TSubclassOf<class UObject> Loaded);
	void Lock_Loading_Screen(bool Lock);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_PlayerLevelStartSequenceTaskAppraisalResultMenu_C">();
	}
	static class UBP_PlayerLevelStartSequenceTaskAppraisalResultMenu_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBP_PlayerLevelStartSequenceTaskAppraisalResultMenu_C>();
	}
};
static_assert(alignof(UBP_PlayerLevelStartSequenceTaskAppraisalResultMenu_C) == 0x000008, "Wrong alignment on UBP_PlayerLevelStartSequenceTaskAppraisalResultMenu_C");
static_assert(sizeof(UBP_PlayerLevelStartSequenceTaskAppraisalResultMenu_C) == 0x000048, "Wrong size on UBP_PlayerLevelStartSequenceTaskAppraisalResultMenu_C");
static_assert(offsetof(UBP_PlayerLevelStartSequenceTaskAppraisalResultMenu_C, UberGraphFrame) == 0x000030, "Member 'UBP_PlayerLevelStartSequenceTaskAppraisalResultMenu_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UBP_PlayerLevelStartSequenceTaskAppraisalResultMenu_C, CountToStart) == 0x000038, "Member 'UBP_PlayerLevelStartSequenceTaskAppraisalResultMenu_C::CountToStart' has a wrong offset!");
static_assert(offsetof(UBP_PlayerLevelStartSequenceTaskAppraisalResultMenu_C, LockLoadingScreen) == 0x00003C, "Member 'UBP_PlayerLevelStartSequenceTaskAppraisalResultMenu_C::LockLoadingScreen' has a wrong offset!");
static_assert(offsetof(UBP_PlayerLevelStartSequenceTaskAppraisalResultMenu_C, StorageComponent) == 0x000040, "Member 'UBP_PlayerLevelStartSequenceTaskAppraisalResultMenu_C::StorageComponent' has a wrong offset!");

}

