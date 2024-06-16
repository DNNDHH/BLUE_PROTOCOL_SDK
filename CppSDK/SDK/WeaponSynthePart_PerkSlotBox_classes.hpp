#pragma once

 

// Package: WeaponSynthePart_PerkSlotBox

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "SkyBlue_structs.hpp"
#include "UMG_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WeaponSynthePart_PerkSlotBox.WeaponSynthePart_PerkSlotBox_C
// 0x00E8 (0x0360 - 0x0278)
class UWeaponSynthePart_PerkSlotBox_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0278(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UCanvasPanel*                           CPTop;                                             // 0x0280(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 ImageTopBG;                                        // 0x0288(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWeaponSynthePart_PerkSlotItem_C*       PerkSlot1;                                         // 0x0290(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWeaponSynthePart_PerkSlotItem_C*       PerkSlot2;                                         // 0x0298(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWeaponSynthePart_PerkSlotItem_C*       PerkSlot3;                                         // 0x02A0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWeaponSynthePart_PerkSlotItem_C*       PerkSlot4;                                         // 0x02A8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UScrollBox*                             ScrollBox;                                         // 0x02B0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBRuntimeTextBlock*                    TextInformation;                                   // 0x02B8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBRuntimeTextBlock*                    TextSlot;                                          // 0x02C0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_             OnClickedPerkSlot;                                 // 0x02C8(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_             OnProtectNumChanged;                               // 0x02D8(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	bool                                          IsVisibleTop;                                      // 0x02E8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          IsVisibleTopText;                                  // 0x02E9(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          IsShortType;                                       // 0x02EA(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6950[0x5];                                     // 0x02EB(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	class USBTextTableAsset*                      TextTableSlotInformation;                          // 0x02F0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         TextIdSlotInfomation;                              // 0x02F8(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_6951[0x4];                                     // 0x02FC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class UWeaponSynthePart_PerkSlotItem_C*> PerkSlotList;                                      // 0x0300(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)
	struct FSBWeaponItemData                      WeaponData;                                        // 0x0310(0x0050)(Edit, BlueprintVisible, DisableEditOnInstance)

public:
	void OnProtectNumChanged__DelegateSignature(int32 ProtectNum);
	void OnClickedPerkSlot__DelegateSignature(int32 SlotNo);
	void ExecuteUbergraph_WeaponSynthePart_PerkSlotBox(int32 EntryPoint);
	void BndEvt__WeaponSynthePart_PerkSlotBox_PerkSlot4_K2Node_ComponentBoundEvent_3_OnClickedLock__DelegateSignature(bool IsLock);
	void BndEvt__WeaponSynthePart_PerkSlotBox_PerkSlot3_K2Node_ComponentBoundEvent_2_OnClickedLock__DelegateSignature(bool IsLock);
	void BndEvt__WeaponSynthePart_PerkSlotBox_PerkSlot2_K2Node_ComponentBoundEvent_1_OnClickedLock__DelegateSignature(bool IsLock);
	void BndEvt__WeaponSynthePart_PerkSlotBox_PerkSlot1_K2Node_ComponentBoundEvent_0_OnClickedLock__DelegateSignature(bool IsLock);
	void BndEvt__WeaponSynthePart_PerkSlotBox_PerkSlot4_K2Node_ComponentBoundEvent_10_OnClicked__DelegateSignature();
	void BndEvt__WeaponSynthePart_PerkSlotBox_PerkSlot3_K2Node_ComponentBoundEvent_8_OnClicked__DelegateSignature();
	void BndEvt__WeaponSynthePart_PerkSlotBox_PerkSlot2_K2Node_ComponentBoundEvent_6_OnClicked__DelegateSignature();
	void BndEvt__WeaponSynthePart_PerkSlotBox_PerkSlot1_K2Node_ComponentBoundEvent_4_OnClicked__DelegateSignature();
	void Construct();
	void PreConstruct(bool IsDesignTime);
	void OnPreConstruct();
	void Reset();
	void SetupSynthe(const struct FOwnItemInfo& InWeapon);
	void SetupSyntheResult(const struct FOwnItemInfo& InWeaponAfter, int32 InSlotNo);
	void SetupAddSlot(const struct FOwnItemInfo& InWeapon);
	void SetupAddSlotResult(const struct FOwnItemInfo& InWeaponAfter);
	void SetupRemove(const struct FOwnItemInfo& InWeapon);
	void SetupRemoveResult(const struct FOwnItemInfo& InWeaponBefore, int32 InSlotNo, bool InIsRemove);
	void SetupTuning(const struct FOwnItemInfo& InWeapon);
	void SetupTuningResult(const struct FOwnItemInfo& InWeaponBefore, const struct FOwnItemInfo& InWeaponAfter, TArray<int32>& LockSlotNo);
	void SetPerkSlotVisible(class UWeaponSynthePart_PerkSlotItem_C* SlotItem, bool InVisible);
	void SetPerkSlotSelect(int32 Param_Index);
	void ResetPerkSlotSelect();
	void SetupPerkSlotSelectButton();
	void ClickPerkSlotLock(int32 Param_Index, bool IsLock);
	void SetTopText(class USBTextTableAsset* InTextTable, int32 InTextID);
	void SetVisibleTop(bool InVisible);
	void SetVisibleTopText(bool InVisible);
	void SetChangeShow(bool bShow, int32 SlotNo);

	void GetPerkSlot(int32 Param_Index, class UWeaponSynthePart_PerkSlotItem_C** PerkSlot) const;
	void GetPerkSlotList(TArray<class UWeaponSynthePart_PerkSlotItem_C*>* Param_PerkSlotList) const;
	void GetPerkSlotLockList(TArray<int32>* LockList) const;
	void IsPerkSlotLock(bool* Result) const;
	void IsPerkSlotLockAll(bool* Result) const;
	void IsPerkSlotSelect(bool* Result) const;
	void GetPerkData(TArray<struct FSBCharacterWeaponPerkData>& PerkList, int32 Param_Index, bool* Result, struct FSBCharacterWeaponPerkData* PerkData) const;
	void FindPerkData(TArray<struct FSBCharacterWeaponPerkData>& PerkList, int32 ItemId, struct FSBCharacterWeaponPerkData* PerkData) const;

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WeaponSynthePart_PerkSlotBox_C">();
	}
	static class UWeaponSynthePart_PerkSlotBox_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWeaponSynthePart_PerkSlotBox_C>();
	}
};
static_assert(alignof(UWeaponSynthePart_PerkSlotBox_C) == 0x000008, "Wrong alignment on UWeaponSynthePart_PerkSlotBox_C");
static_assert(sizeof(UWeaponSynthePart_PerkSlotBox_C) == 0x000360, "Wrong size on UWeaponSynthePart_PerkSlotBox_C");
static_assert(offsetof(UWeaponSynthePart_PerkSlotBox_C, UberGraphFrame) == 0x000278, "Member 'UWeaponSynthePart_PerkSlotBox_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UWeaponSynthePart_PerkSlotBox_C, CPTop) == 0x000280, "Member 'UWeaponSynthePart_PerkSlotBox_C::CPTop' has a wrong offset!");
static_assert(offsetof(UWeaponSynthePart_PerkSlotBox_C, ImageTopBG) == 0x000288, "Member 'UWeaponSynthePart_PerkSlotBox_C::ImageTopBG' has a wrong offset!");
static_assert(offsetof(UWeaponSynthePart_PerkSlotBox_C, PerkSlot1) == 0x000290, "Member 'UWeaponSynthePart_PerkSlotBox_C::PerkSlot1' has a wrong offset!");
static_assert(offsetof(UWeaponSynthePart_PerkSlotBox_C, PerkSlot2) == 0x000298, "Member 'UWeaponSynthePart_PerkSlotBox_C::PerkSlot2' has a wrong offset!");
static_assert(offsetof(UWeaponSynthePart_PerkSlotBox_C, PerkSlot3) == 0x0002A0, "Member 'UWeaponSynthePart_PerkSlotBox_C::PerkSlot3' has a wrong offset!");
static_assert(offsetof(UWeaponSynthePart_PerkSlotBox_C, PerkSlot4) == 0x0002A8, "Member 'UWeaponSynthePart_PerkSlotBox_C::PerkSlot4' has a wrong offset!");
static_assert(offsetof(UWeaponSynthePart_PerkSlotBox_C, ScrollBox) == 0x0002B0, "Member 'UWeaponSynthePart_PerkSlotBox_C::ScrollBox' has a wrong offset!");
static_assert(offsetof(UWeaponSynthePart_PerkSlotBox_C, TextInformation) == 0x0002B8, "Member 'UWeaponSynthePart_PerkSlotBox_C::TextInformation' has a wrong offset!");
static_assert(offsetof(UWeaponSynthePart_PerkSlotBox_C, TextSlot) == 0x0002C0, "Member 'UWeaponSynthePart_PerkSlotBox_C::TextSlot' has a wrong offset!");
static_assert(offsetof(UWeaponSynthePart_PerkSlotBox_C, OnClickedPerkSlot) == 0x0002C8, "Member 'UWeaponSynthePart_PerkSlotBox_C::OnClickedPerkSlot' has a wrong offset!");
static_assert(offsetof(UWeaponSynthePart_PerkSlotBox_C, OnProtectNumChanged) == 0x0002D8, "Member 'UWeaponSynthePart_PerkSlotBox_C::OnProtectNumChanged' has a wrong offset!");
static_assert(offsetof(UWeaponSynthePart_PerkSlotBox_C, IsVisibleTop) == 0x0002E8, "Member 'UWeaponSynthePart_PerkSlotBox_C::IsVisibleTop' has a wrong offset!");
static_assert(offsetof(UWeaponSynthePart_PerkSlotBox_C, IsVisibleTopText) == 0x0002E9, "Member 'UWeaponSynthePart_PerkSlotBox_C::IsVisibleTopText' has a wrong offset!");
static_assert(offsetof(UWeaponSynthePart_PerkSlotBox_C, IsShortType) == 0x0002EA, "Member 'UWeaponSynthePart_PerkSlotBox_C::IsShortType' has a wrong offset!");
static_assert(offsetof(UWeaponSynthePart_PerkSlotBox_C, TextTableSlotInformation) == 0x0002F0, "Member 'UWeaponSynthePart_PerkSlotBox_C::TextTableSlotInformation' has a wrong offset!");
static_assert(offsetof(UWeaponSynthePart_PerkSlotBox_C, TextIdSlotInfomation) == 0x0002F8, "Member 'UWeaponSynthePart_PerkSlotBox_C::TextIdSlotInfomation' has a wrong offset!");
static_assert(offsetof(UWeaponSynthePart_PerkSlotBox_C, PerkSlotList) == 0x000300, "Member 'UWeaponSynthePart_PerkSlotBox_C::PerkSlotList' has a wrong offset!");
static_assert(offsetof(UWeaponSynthePart_PerkSlotBox_C, WeaponData) == 0x000310, "Member 'UWeaponSynthePart_PerkSlotBox_C::WeaponData' has a wrong offset!");

}

