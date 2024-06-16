#pragma once

 

// Package: ChatSettingRadioBtn

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "SkyBlue_structs.hpp"
#include "UMG_structs.hpp"
#include "UMG_classes.hpp"
#include "SlateCore_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass ChatSettingRadioBtn.ChatSettingRadioBtn_C
// 0x00A8 (0x0320 - 0x0278)
class UChatSettingRadioBtn_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0278(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UCanvasPanel*                           CanvasPanel_0;                                     // 0x0280(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                           CanvasPanel_1;                                     // 0x0288(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                           CanvasPanel_2;                                     // 0x0290(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                           CanvasPanel_3;                                     // 0x0298(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_0;                                           // 0x02A0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_1;                                           // 0x02A8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_2;                                           // 0x02B0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_3;                                           // 0x02B8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBRadioBtnCmn01_C*                     RadioBtn_0;                                        // 0x02C0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBRadioBtnCmn01_C*                     RadioBtn_1;                                        // 0x02C8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBRadioBtnCmn01_C*                     RadioBtn_2;                                        // 0x02D0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBRadioBtnCmn01_C*                     RadioBtn_3;                                        // 0x02D8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	ESBChatLogWindowSlot                          ChatLogWindowSlot;                                 // 0x02E0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	uint8                                         Pad_4625[0x7];                                     // 0x02E1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<bool>                                  UseBtnIds;                                         // 0x02E8(0x0010)(Edit, BlueprintVisible, ExposeOnSpawn)
	TArray<class UCanvasPanel*>                   BtnArray;                                          // 0x02F8(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)
	FMulticastInlineDelegateProperty_             OnChange;                                          // 0x0308(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	int32                                         SelectBtnId;                                       // 0x0318(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void OnChange__DelegateSignature(int32 InSelectBtnId);
	void ExecuteUbergraph_ChatSettingRadioBtn(int32 EntryPoint);
	void BndEvt__ChatSettingRadioBtn_RadioBtn_3_K2Node_ComponentBoundEvent_3_OnCheckBoxComponentStateChanged__DelegateSignature(bool bIsChecked);
	void BndEvt__ChatSettingRadioBtn_RadioBtn_2_K2Node_ComponentBoundEvent_2_OnCheckBoxComponentStateChanged__DelegateSignature(bool bIsChecked);
	void Construct();
	void UpdateBlocker();
	void BndEvt__UnreadNotifyRadioBtn_RadioBtn_OFF_K2Node_ComponentBoundEvent_1_OnCheckBoxComponentStateChanged__DelegateSignature(bool bIsChecked);
	void BndEvt__UnreadNotifyRadioBtn_RadioBtn_ON_K2Node_ComponentBoundEvent_0_OnCheckBoxComponentStateChanged__DelegateSignature(bool bIsChecked);
	void InitBtnSetting(int32 BtnId, bool InEnable);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"ChatSettingRadioBtn_C">();
	}
	static class UChatSettingRadioBtn_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UChatSettingRadioBtn_C>();
	}
};
static_assert(alignof(UChatSettingRadioBtn_C) == 0x000008, "Wrong alignment on UChatSettingRadioBtn_C");
static_assert(sizeof(UChatSettingRadioBtn_C) == 0x000320, "Wrong size on UChatSettingRadioBtn_C");
static_assert(offsetof(UChatSettingRadioBtn_C, UberGraphFrame) == 0x000278, "Member 'UChatSettingRadioBtn_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UChatSettingRadioBtn_C, CanvasPanel_0) == 0x000280, "Member 'UChatSettingRadioBtn_C::CanvasPanel_0' has a wrong offset!");
static_assert(offsetof(UChatSettingRadioBtn_C, CanvasPanel_1) == 0x000288, "Member 'UChatSettingRadioBtn_C::CanvasPanel_1' has a wrong offset!");
static_assert(offsetof(UChatSettingRadioBtn_C, CanvasPanel_2) == 0x000290, "Member 'UChatSettingRadioBtn_C::CanvasPanel_2' has a wrong offset!");
static_assert(offsetof(UChatSettingRadioBtn_C, CanvasPanel_3) == 0x000298, "Member 'UChatSettingRadioBtn_C::CanvasPanel_3' has a wrong offset!");
static_assert(offsetof(UChatSettingRadioBtn_C, Image_0) == 0x0002A0, "Member 'UChatSettingRadioBtn_C::Image_0' has a wrong offset!");
static_assert(offsetof(UChatSettingRadioBtn_C, Image_1) == 0x0002A8, "Member 'UChatSettingRadioBtn_C::Image_1' has a wrong offset!");
static_assert(offsetof(UChatSettingRadioBtn_C, Image_2) == 0x0002B0, "Member 'UChatSettingRadioBtn_C::Image_2' has a wrong offset!");
static_assert(offsetof(UChatSettingRadioBtn_C, Image_3) == 0x0002B8, "Member 'UChatSettingRadioBtn_C::Image_3' has a wrong offset!");
static_assert(offsetof(UChatSettingRadioBtn_C, RadioBtn_0) == 0x0002C0, "Member 'UChatSettingRadioBtn_C::RadioBtn_0' has a wrong offset!");
static_assert(offsetof(UChatSettingRadioBtn_C, RadioBtn_1) == 0x0002C8, "Member 'UChatSettingRadioBtn_C::RadioBtn_1' has a wrong offset!");
static_assert(offsetof(UChatSettingRadioBtn_C, RadioBtn_2) == 0x0002D0, "Member 'UChatSettingRadioBtn_C::RadioBtn_2' has a wrong offset!");
static_assert(offsetof(UChatSettingRadioBtn_C, RadioBtn_3) == 0x0002D8, "Member 'UChatSettingRadioBtn_C::RadioBtn_3' has a wrong offset!");
static_assert(offsetof(UChatSettingRadioBtn_C, ChatLogWindowSlot) == 0x0002E0, "Member 'UChatSettingRadioBtn_C::ChatLogWindowSlot' has a wrong offset!");
static_assert(offsetof(UChatSettingRadioBtn_C, UseBtnIds) == 0x0002E8, "Member 'UChatSettingRadioBtn_C::UseBtnIds' has a wrong offset!");
static_assert(offsetof(UChatSettingRadioBtn_C, BtnArray) == 0x0002F8, "Member 'UChatSettingRadioBtn_C::BtnArray' has a wrong offset!");
static_assert(offsetof(UChatSettingRadioBtn_C, OnChange) == 0x000308, "Member 'UChatSettingRadioBtn_C::OnChange' has a wrong offset!");
static_assert(offsetof(UChatSettingRadioBtn_C, SelectBtnId) == 0x000318, "Member 'UChatSettingRadioBtn_C::SelectBtnId' has a wrong offset!");

}

