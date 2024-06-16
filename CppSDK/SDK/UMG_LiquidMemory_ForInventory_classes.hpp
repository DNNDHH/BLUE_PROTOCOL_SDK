#pragma once

 

// Package: UMG_LiquidMemory_ForInventory

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "SkyBlue_structs.hpp"
#include "UMG_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass UMG_LiquidMemory_ForInventory.UMG_LiquidMemory_ForInventory_C
// 0x0098 (0x0310 - 0x0278)
class UUMG_LiquidMemory_ForInventory_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0278(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       AnimIn;                                            // 0x0280(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UImage*                                 Image_HelpIcon;                                    // 0x0288(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                           MoveAnim;                                          // 0x0290(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class URetainerBox*                           RetainerBox_0;                                     // 0x0298(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBRuntimeTextBlock*                    SBRuntimeTextBlock_268;                            // 0x02A0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USelectBlankText_C*                     SelectBlankText;                                   // 0x02A8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUMG_LiquidMemoryItem_C*                UMG_LiquidMemoryItem;                              // 0x02B0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUMG_LiquidMemoryItem_C*                UMG_LiquidMemoryItem_292;                          // 0x02B8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUMG_LiquidMemoryItem_C*                UMG_LiquidMemoryItem_489;                          // 0x02C0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUMG_LiquidMemoryItem_C*                UMG_LiquidMemoryItem_861;                          // 0x02C8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUMG_LiquidMemoryItem_C*                UMG_LiquidMemoryItem_1105;                         // 0x02D0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                           VB_LiquidMemoryList;                               // 0x02D8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	TArray<struct FSBLiquidMemoryMasterData>      LiquidMemoryMasterDataArray;                       // 0x02E0(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<struct FSBLiquidMemoryInfo>            OwnLiquidMemoryInfos;                              // 0x02F0(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                          IsRequestingLiquidMemoryAccumulate;                // 0x0300(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          IsOpenExecuting;                                   // 0x0301(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5814[0x6];                                     // 0x0302(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class USBNetworkDataCache*                    NetworkDataCache;                                  // 0x0308(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_UMG_LiquidMemory_ForInventory(int32 EntryPoint);
	void RewardBoostUpdateComplete(int32 InRetCode);
	void RewardBoostUpdate();
	void ExecOpen();
	void OnAccumulateLiquidMemory_Event(const int32 InRetCode, const TArray<struct FSBLiquidMemoryInfo>& InUpdatedLiquidMemoryInfos);
	void Construct();
	void Destruct();
	void Open();
	void SetLiquidMemoryListItemNum(int32 InItemNum);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"UMG_LiquidMemory_ForInventory_C">();
	}
	static class UUMG_LiquidMemory_ForInventory_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UUMG_LiquidMemory_ForInventory_C>();
	}
};
static_assert(alignof(UUMG_LiquidMemory_ForInventory_C) == 0x000008, "Wrong alignment on UUMG_LiquidMemory_ForInventory_C");
static_assert(sizeof(UUMG_LiquidMemory_ForInventory_C) == 0x000310, "Wrong size on UUMG_LiquidMemory_ForInventory_C");
static_assert(offsetof(UUMG_LiquidMemory_ForInventory_C, UberGraphFrame) == 0x000278, "Member 'UUMG_LiquidMemory_ForInventory_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UUMG_LiquidMemory_ForInventory_C, AnimIn) == 0x000280, "Member 'UUMG_LiquidMemory_ForInventory_C::AnimIn' has a wrong offset!");
static_assert(offsetof(UUMG_LiquidMemory_ForInventory_C, Image_HelpIcon) == 0x000288, "Member 'UUMG_LiquidMemory_ForInventory_C::Image_HelpIcon' has a wrong offset!");
static_assert(offsetof(UUMG_LiquidMemory_ForInventory_C, MoveAnim) == 0x000290, "Member 'UUMG_LiquidMemory_ForInventory_C::MoveAnim' has a wrong offset!");
static_assert(offsetof(UUMG_LiquidMemory_ForInventory_C, RetainerBox_0) == 0x000298, "Member 'UUMG_LiquidMemory_ForInventory_C::RetainerBox_0' has a wrong offset!");
static_assert(offsetof(UUMG_LiquidMemory_ForInventory_C, SBRuntimeTextBlock_268) == 0x0002A0, "Member 'UUMG_LiquidMemory_ForInventory_C::SBRuntimeTextBlock_268' has a wrong offset!");
static_assert(offsetof(UUMG_LiquidMemory_ForInventory_C, SelectBlankText) == 0x0002A8, "Member 'UUMG_LiquidMemory_ForInventory_C::SelectBlankText' has a wrong offset!");
static_assert(offsetof(UUMG_LiquidMemory_ForInventory_C, UMG_LiquidMemoryItem) == 0x0002B0, "Member 'UUMG_LiquidMemory_ForInventory_C::UMG_LiquidMemoryItem' has a wrong offset!");
static_assert(offsetof(UUMG_LiquidMemory_ForInventory_C, UMG_LiquidMemoryItem_292) == 0x0002B8, "Member 'UUMG_LiquidMemory_ForInventory_C::UMG_LiquidMemoryItem_292' has a wrong offset!");
static_assert(offsetof(UUMG_LiquidMemory_ForInventory_C, UMG_LiquidMemoryItem_489) == 0x0002C0, "Member 'UUMG_LiquidMemory_ForInventory_C::UMG_LiquidMemoryItem_489' has a wrong offset!");
static_assert(offsetof(UUMG_LiquidMemory_ForInventory_C, UMG_LiquidMemoryItem_861) == 0x0002C8, "Member 'UUMG_LiquidMemory_ForInventory_C::UMG_LiquidMemoryItem_861' has a wrong offset!");
static_assert(offsetof(UUMG_LiquidMemory_ForInventory_C, UMG_LiquidMemoryItem_1105) == 0x0002D0, "Member 'UUMG_LiquidMemory_ForInventory_C::UMG_LiquidMemoryItem_1105' has a wrong offset!");
static_assert(offsetof(UUMG_LiquidMemory_ForInventory_C, VB_LiquidMemoryList) == 0x0002D8, "Member 'UUMG_LiquidMemory_ForInventory_C::VB_LiquidMemoryList' has a wrong offset!");
static_assert(offsetof(UUMG_LiquidMemory_ForInventory_C, LiquidMemoryMasterDataArray) == 0x0002E0, "Member 'UUMG_LiquidMemory_ForInventory_C::LiquidMemoryMasterDataArray' has a wrong offset!");
static_assert(offsetof(UUMG_LiquidMemory_ForInventory_C, OwnLiquidMemoryInfos) == 0x0002F0, "Member 'UUMG_LiquidMemory_ForInventory_C::OwnLiquidMemoryInfos' has a wrong offset!");
static_assert(offsetof(UUMG_LiquidMemory_ForInventory_C, IsRequestingLiquidMemoryAccumulate) == 0x000300, "Member 'UUMG_LiquidMemory_ForInventory_C::IsRequestingLiquidMemoryAccumulate' has a wrong offset!");
static_assert(offsetof(UUMG_LiquidMemory_ForInventory_C, IsOpenExecuting) == 0x000301, "Member 'UUMG_LiquidMemory_ForInventory_C::IsOpenExecuting' has a wrong offset!");
static_assert(offsetof(UUMG_LiquidMemory_ForInventory_C, NetworkDataCache) == 0x000308, "Member 'UUMG_LiquidMemory_ForInventory_C::NetworkDataCache' has a wrong offset!");

}

