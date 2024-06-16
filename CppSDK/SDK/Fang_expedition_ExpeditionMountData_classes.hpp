#pragma once

 

// Package: Fang_expedition_ExpeditionMountData

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass Fang_expedition_ExpeditionMountData.Fang_expedition_ExpeditionMountData_C
// 0x00F8 (0x0370 - 0x0278)
class UFang_expedition_ExpeditionMountData_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0278(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UImage*                                 BG;                                                // 0x0280(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 BG_1;                                              // 0x0288(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             CountText;                                         // 0x0290(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UFang_expedition_ExpeditionHeartAnm_C*  Heart1;                                            // 0x0298(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UFang_expedition_ExpeditionHeartAnm_C*  Heart2;                                            // 0x02A0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UFang_expedition_ExpeditionHeartAnm_C*  Heart3;                                            // 0x02A8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 HeartBG1;                                          // 0x02B0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 HeartBG2;                                          // 0x02B8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 HeartBG3;                                          // 0x02C0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 IconBG1;                                           // 0x02C8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 IconBG2;                                           // 0x02D0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 IconBG3;                                           // 0x02D8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 IconBG4;                                           // 0x02E0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 IconBG5;                                           // 0x02E8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 InfoIcon;                                          // 0x02F0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonIcon_C*                          MountIcon1;                                        // 0x02F8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonIcon_C*                          MountIcon2;                                        // 0x0300(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonIcon_C*                          MountIcon3;                                        // 0x0308(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonIcon_C*                          MountIcon4;                                        // 0x0310(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonIcon_C*                          MountIcon5;                                        // 0x0318(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	TArray<class FString>                         UniqueIdList;                                      // 0x0320(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<class FString>                         DisplayIdList;                                     // 0x0330(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	FMulticastInlineDelegateProperty_             OnClickMountIcon;                                  // 0x0340(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	int32                                         ClickIconIndex;                                    // 0x0350(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5E0F[0x4];                                     // 0x0354(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UCommonIconToolTipContent_MultiLine_C*  ToolTip;                                           // 0x0358(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USBTextTableAsset*                      TextTable;                                         // 0x0360(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         MaxIcon;                                           // 0x0368(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         PlusCount;                                         // 0x036C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void OnClickMountIcon__DelegateSignature();
	void ExecuteUbergraph_Fang_expedition_ExpeditionMountData(int32 EntryPoint);
	void Destruct();
	void OnClickIcon5(class UCommonIcon_C* Sender);
	void OnClickIcon4(class UCommonIcon_C* Sender);
	void OnClickIcon3(class UCommonIcon_C* Sender);
	void OnClickIcon2(class UCommonIcon_C* Sender);
	void OnClickIcon1(class UCommonIcon_C* Sender);
	void Construct();
	void ClearFangData();
	void AddUniqueId(const class FString& UniqueId);
	void UpdateIcon();
	void BindFunc();
	void UnbindFunc();
	void RemoveIndex();
	void SetExpectedValue(int32 Value);
	void SetUniqueIds(TArray<class FString>& UniqueIds);
	void SetMaxIconNum(int32 IconCount);
	void SetPlusCount(int32 Count, bool UpdateSkip);
	void UpdateLotteryCountText();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"Fang_expedition_ExpeditionMountData_C">();
	}
	static class UFang_expedition_ExpeditionMountData_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFang_expedition_ExpeditionMountData_C>();
	}
};
static_assert(alignof(UFang_expedition_ExpeditionMountData_C) == 0x000008, "Wrong alignment on UFang_expedition_ExpeditionMountData_C");
static_assert(sizeof(UFang_expedition_ExpeditionMountData_C) == 0x000370, "Wrong size on UFang_expedition_ExpeditionMountData_C");
static_assert(offsetof(UFang_expedition_ExpeditionMountData_C, UberGraphFrame) == 0x000278, "Member 'UFang_expedition_ExpeditionMountData_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UFang_expedition_ExpeditionMountData_C, BG) == 0x000280, "Member 'UFang_expedition_ExpeditionMountData_C::BG' has a wrong offset!");
static_assert(offsetof(UFang_expedition_ExpeditionMountData_C, BG_1) == 0x000288, "Member 'UFang_expedition_ExpeditionMountData_C::BG_1' has a wrong offset!");
static_assert(offsetof(UFang_expedition_ExpeditionMountData_C, CountText) == 0x000290, "Member 'UFang_expedition_ExpeditionMountData_C::CountText' has a wrong offset!");
static_assert(offsetof(UFang_expedition_ExpeditionMountData_C, Heart1) == 0x000298, "Member 'UFang_expedition_ExpeditionMountData_C::Heart1' has a wrong offset!");
static_assert(offsetof(UFang_expedition_ExpeditionMountData_C, Heart2) == 0x0002A0, "Member 'UFang_expedition_ExpeditionMountData_C::Heart2' has a wrong offset!");
static_assert(offsetof(UFang_expedition_ExpeditionMountData_C, Heart3) == 0x0002A8, "Member 'UFang_expedition_ExpeditionMountData_C::Heart3' has a wrong offset!");
static_assert(offsetof(UFang_expedition_ExpeditionMountData_C, HeartBG1) == 0x0002B0, "Member 'UFang_expedition_ExpeditionMountData_C::HeartBG1' has a wrong offset!");
static_assert(offsetof(UFang_expedition_ExpeditionMountData_C, HeartBG2) == 0x0002B8, "Member 'UFang_expedition_ExpeditionMountData_C::HeartBG2' has a wrong offset!");
static_assert(offsetof(UFang_expedition_ExpeditionMountData_C, HeartBG3) == 0x0002C0, "Member 'UFang_expedition_ExpeditionMountData_C::HeartBG3' has a wrong offset!");
static_assert(offsetof(UFang_expedition_ExpeditionMountData_C, IconBG1) == 0x0002C8, "Member 'UFang_expedition_ExpeditionMountData_C::IconBG1' has a wrong offset!");
static_assert(offsetof(UFang_expedition_ExpeditionMountData_C, IconBG2) == 0x0002D0, "Member 'UFang_expedition_ExpeditionMountData_C::IconBG2' has a wrong offset!");
static_assert(offsetof(UFang_expedition_ExpeditionMountData_C, IconBG3) == 0x0002D8, "Member 'UFang_expedition_ExpeditionMountData_C::IconBG3' has a wrong offset!");
static_assert(offsetof(UFang_expedition_ExpeditionMountData_C, IconBG4) == 0x0002E0, "Member 'UFang_expedition_ExpeditionMountData_C::IconBG4' has a wrong offset!");
static_assert(offsetof(UFang_expedition_ExpeditionMountData_C, IconBG5) == 0x0002E8, "Member 'UFang_expedition_ExpeditionMountData_C::IconBG5' has a wrong offset!");
static_assert(offsetof(UFang_expedition_ExpeditionMountData_C, InfoIcon) == 0x0002F0, "Member 'UFang_expedition_ExpeditionMountData_C::InfoIcon' has a wrong offset!");
static_assert(offsetof(UFang_expedition_ExpeditionMountData_C, MountIcon1) == 0x0002F8, "Member 'UFang_expedition_ExpeditionMountData_C::MountIcon1' has a wrong offset!");
static_assert(offsetof(UFang_expedition_ExpeditionMountData_C, MountIcon2) == 0x000300, "Member 'UFang_expedition_ExpeditionMountData_C::MountIcon2' has a wrong offset!");
static_assert(offsetof(UFang_expedition_ExpeditionMountData_C, MountIcon3) == 0x000308, "Member 'UFang_expedition_ExpeditionMountData_C::MountIcon3' has a wrong offset!");
static_assert(offsetof(UFang_expedition_ExpeditionMountData_C, MountIcon4) == 0x000310, "Member 'UFang_expedition_ExpeditionMountData_C::MountIcon4' has a wrong offset!");
static_assert(offsetof(UFang_expedition_ExpeditionMountData_C, MountIcon5) == 0x000318, "Member 'UFang_expedition_ExpeditionMountData_C::MountIcon5' has a wrong offset!");
static_assert(offsetof(UFang_expedition_ExpeditionMountData_C, UniqueIdList) == 0x000320, "Member 'UFang_expedition_ExpeditionMountData_C::UniqueIdList' has a wrong offset!");
static_assert(offsetof(UFang_expedition_ExpeditionMountData_C, DisplayIdList) == 0x000330, "Member 'UFang_expedition_ExpeditionMountData_C::DisplayIdList' has a wrong offset!");
static_assert(offsetof(UFang_expedition_ExpeditionMountData_C, OnClickMountIcon) == 0x000340, "Member 'UFang_expedition_ExpeditionMountData_C::OnClickMountIcon' has a wrong offset!");
static_assert(offsetof(UFang_expedition_ExpeditionMountData_C, ClickIconIndex) == 0x000350, "Member 'UFang_expedition_ExpeditionMountData_C::ClickIconIndex' has a wrong offset!");
static_assert(offsetof(UFang_expedition_ExpeditionMountData_C, ToolTip) == 0x000358, "Member 'UFang_expedition_ExpeditionMountData_C::ToolTip' has a wrong offset!");
static_assert(offsetof(UFang_expedition_ExpeditionMountData_C, TextTable) == 0x000360, "Member 'UFang_expedition_ExpeditionMountData_C::TextTable' has a wrong offset!");
static_assert(offsetof(UFang_expedition_ExpeditionMountData_C, MaxIcon) == 0x000368, "Member 'UFang_expedition_ExpeditionMountData_C::MaxIcon' has a wrong offset!");
static_assert(offsetof(UFang_expedition_ExpeditionMountData_C, PlusCount) == 0x00036C, "Member 'UFang_expedition_ExpeditionMountData_C::PlusCount' has a wrong offset!");

}

