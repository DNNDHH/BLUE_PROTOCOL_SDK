#pragma once

 

// Package: EventShopStorageSelect

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "SkyBlue_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass EventShopStorageSelect.EventShopStorageSelect_C
// 0x0098 (0x0310 - 0x0278)
class UEventShopStorageSelect_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0278(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       AnmInOut;                                          // 0x0280(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UImage*                                 bg_base;                                           // 0x0288(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBCheckBox_C*                          Btn_Select01;                                      // 0x0290(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBCheckBox_C*                          Btn_Select02;                                      // 0x0298(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBCheckBox_C*                          Btn_Select03;                                      // 0x02A0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCmnBtn16_C*                            Btn_SettingChange;                                 // 0x02A8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCmnClose02_C*                          CmnClose02;                                        // 0x02B0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_Arrow;                                       // 0x02B8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Img_CmnWindowArrow;                                // 0x02C0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Img_IconBag;                                       // 0x02C8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Img_IconStorage;                                   // 0x02D0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Img_line01;                                        // 0x02D8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Img_line02;                                        // 0x02E0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Img_line03;                                        // 0x02E8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                           RootPanel;                                         // 0x02F0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_             OnClosed;                                          // 0x02F8(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	ESBEventShopStorage                           CheckButtonId;                                     // 0x0308(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void OnClosed__DelegateSignature();
	void ExecuteUbergraph_EventShopStorageSelect(int32 EntryPoint);
	void Construct();
	void OnAnimFinish_Event();
	void BndEvt__EventShopStorageSelect_CmnClose02_K2Node_ComponentBoundEvent_0_OnClosed__DelegateSignature();
	void BndEvt__EventShopStorageSelect_Btn_SettingChange1_K2Node_ComponentBoundEvent_7_EventOnClicked__DelegateSignature();
	void BndEvt__EventShopStorageSelect_Btn_Select01_K2Node_ComponentBoundEvent_1_OnCheckBoxComponentStateChanged__DelegateSignature(bool bIsChecked);
	void BndEvt__EventShopStorageSelect_Btn_Select02_K2Node_ComponentBoundEvent_2_OnCheckBoxComponentStateChanged__DelegateSignature(bool bIsChecked);
	void BndEvt__EventShopStorageSelect_Btn_Select03_K2Node_ComponentBoundEvent_3_OnCheckBoxComponentStateChanged__DelegateSignature(bool bIsChecked);
	void UpdateCheckState(class USBCheckBox_C* On, class USBCheckBox_C* Off1, class USBCheckBox_C* Off2, ESBEventShopStorage Param_Index);
	void Show();
	void Hide();
	void Initialize();
	void ResetCkeckState(ESBEventShopStorage Active);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"EventShopStorageSelect_C">();
	}
	static class UEventShopStorageSelect_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UEventShopStorageSelect_C>();
	}
};
static_assert(alignof(UEventShopStorageSelect_C) == 0x000008, "Wrong alignment on UEventShopStorageSelect_C");
static_assert(sizeof(UEventShopStorageSelect_C) == 0x000310, "Wrong size on UEventShopStorageSelect_C");
static_assert(offsetof(UEventShopStorageSelect_C, UberGraphFrame) == 0x000278, "Member 'UEventShopStorageSelect_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UEventShopStorageSelect_C, AnmInOut) == 0x000280, "Member 'UEventShopStorageSelect_C::AnmInOut' has a wrong offset!");
static_assert(offsetof(UEventShopStorageSelect_C, bg_base) == 0x000288, "Member 'UEventShopStorageSelect_C::bg_base' has a wrong offset!");
static_assert(offsetof(UEventShopStorageSelect_C, Btn_Select01) == 0x000290, "Member 'UEventShopStorageSelect_C::Btn_Select01' has a wrong offset!");
static_assert(offsetof(UEventShopStorageSelect_C, Btn_Select02) == 0x000298, "Member 'UEventShopStorageSelect_C::Btn_Select02' has a wrong offset!");
static_assert(offsetof(UEventShopStorageSelect_C, Btn_Select03) == 0x0002A0, "Member 'UEventShopStorageSelect_C::Btn_Select03' has a wrong offset!");
static_assert(offsetof(UEventShopStorageSelect_C, Btn_SettingChange) == 0x0002A8, "Member 'UEventShopStorageSelect_C::Btn_SettingChange' has a wrong offset!");
static_assert(offsetof(UEventShopStorageSelect_C, CmnClose02) == 0x0002B0, "Member 'UEventShopStorageSelect_C::CmnClose02' has a wrong offset!");
static_assert(offsetof(UEventShopStorageSelect_C, Image_Arrow) == 0x0002B8, "Member 'UEventShopStorageSelect_C::Image_Arrow' has a wrong offset!");
static_assert(offsetof(UEventShopStorageSelect_C, Img_CmnWindowArrow) == 0x0002C0, "Member 'UEventShopStorageSelect_C::Img_CmnWindowArrow' has a wrong offset!");
static_assert(offsetof(UEventShopStorageSelect_C, Img_IconBag) == 0x0002C8, "Member 'UEventShopStorageSelect_C::Img_IconBag' has a wrong offset!");
static_assert(offsetof(UEventShopStorageSelect_C, Img_IconStorage) == 0x0002D0, "Member 'UEventShopStorageSelect_C::Img_IconStorage' has a wrong offset!");
static_assert(offsetof(UEventShopStorageSelect_C, Img_line01) == 0x0002D8, "Member 'UEventShopStorageSelect_C::Img_line01' has a wrong offset!");
static_assert(offsetof(UEventShopStorageSelect_C, Img_line02) == 0x0002E0, "Member 'UEventShopStorageSelect_C::Img_line02' has a wrong offset!");
static_assert(offsetof(UEventShopStorageSelect_C, Img_line03) == 0x0002E8, "Member 'UEventShopStorageSelect_C::Img_line03' has a wrong offset!");
static_assert(offsetof(UEventShopStorageSelect_C, RootPanel) == 0x0002F0, "Member 'UEventShopStorageSelect_C::RootPanel' has a wrong offset!");
static_assert(offsetof(UEventShopStorageSelect_C, OnClosed) == 0x0002F8, "Member 'UEventShopStorageSelect_C::OnClosed' has a wrong offset!");
static_assert(offsetof(UEventShopStorageSelect_C, CheckButtonId) == 0x000308, "Member 'UEventShopStorageSelect_C::CheckButtonId' has a wrong offset!");

}

