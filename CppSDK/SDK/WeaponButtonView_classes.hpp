#pragma once

 

// Package: WeaponButtonView

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "SkyBlue_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WeaponButtonView.WeaponButtonView_C
// 0x01E8 (0x0460 - 0x0278)
class UWeaponButtonView_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0278(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UAttributeIcon_C*                       AttributeIcon;                                     // 0x0280(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCmnBtn16_C*                            BtnReselect;                                       // 0x0288(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCmnBonusLarge_C*                       CmnBonusLarge;                                     // 0x0290(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image;                                             // 0x0298(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_1;                                           // 0x02A0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_2;                                           // 0x02A8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_241;                                         // 0x02B0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Img_thumbnail;                                     // 0x02B8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBRuntimeTextBlock*                    Txt_Atk;                                           // 0x02C0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBRuntimeTextBlock*                    Txt_AttrbAtk;                                      // 0x02C8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBRuntimeTextBlock*                    Txt_Crt;                                           // 0x02D0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBRuntimeTextBlock*                    Txt_Level;                                         // 0x02D8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBRuntimeTextBlock*                    Txt_VaitalValue;                                   // 0x02E0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBRuntimeTextBlock*                    Txt_Vital;                                         // 0x02E8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBRuntimeTextBlock*                    Txt_WeaponName;                                    // 0x02F0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_StackB_L_C*                        WBP_StackB_L;                                      // 0x02F8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWeaponButtonViewPerkList_C*            WeaponButtonViewPerkList;                          // 0x0300(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	bool                                          bIsImageLoading;                                   // 0x0308(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6998[0x7];                                     // 0x0309(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TSoftObjectPtr<class UTexture2D>              LoadingIcon;                                       // 0x0310(0x0028)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	struct FOwnItemInfo                           LoadItemInfo;                                      // 0x0338(0x0118)(Edit, BlueprintVisible, DisableEditOnInstance)
	FMulticastInlineDelegateProperty_             OnClicked;                                         // 0x0450(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)

public:
	void OnClicked__DelegateSignature();
	void ExecuteUbergraph_WeaponButtonView(int32 EntryPoint);
	void BndEvt__WeaponButtonView_BtnReselect_K2Node_ComponentBoundEvent_1_EventOnClicked__DelegateSignature();
	void RequestLoadImage(const struct FOwnItemInfo& OwnItemInfo);
	void OnLoaded_3A96932F4BF4231E1AB840A7261D0FEA(class UObject* Loaded);
	void ApplySelectWeapon(const struct FOwnItemInfo& OwnItemInfo);
	void ApplyWeaponStatus(const struct FOwnItemInfo& WeaponData);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WeaponButtonView_C">();
	}
	static class UWeaponButtonView_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWeaponButtonView_C>();
	}
};
static_assert(alignof(UWeaponButtonView_C) == 0x000008, "Wrong alignment on UWeaponButtonView_C");
static_assert(sizeof(UWeaponButtonView_C) == 0x000460, "Wrong size on UWeaponButtonView_C");
static_assert(offsetof(UWeaponButtonView_C, UberGraphFrame) == 0x000278, "Member 'UWeaponButtonView_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UWeaponButtonView_C, AttributeIcon) == 0x000280, "Member 'UWeaponButtonView_C::AttributeIcon' has a wrong offset!");
static_assert(offsetof(UWeaponButtonView_C, BtnReselect) == 0x000288, "Member 'UWeaponButtonView_C::BtnReselect' has a wrong offset!");
static_assert(offsetof(UWeaponButtonView_C, CmnBonusLarge) == 0x000290, "Member 'UWeaponButtonView_C::CmnBonusLarge' has a wrong offset!");
static_assert(offsetof(UWeaponButtonView_C, Image) == 0x000298, "Member 'UWeaponButtonView_C::Image' has a wrong offset!");
static_assert(offsetof(UWeaponButtonView_C, Image_1) == 0x0002A0, "Member 'UWeaponButtonView_C::Image_1' has a wrong offset!");
static_assert(offsetof(UWeaponButtonView_C, Image_2) == 0x0002A8, "Member 'UWeaponButtonView_C::Image_2' has a wrong offset!");
static_assert(offsetof(UWeaponButtonView_C, Image_241) == 0x0002B0, "Member 'UWeaponButtonView_C::Image_241' has a wrong offset!");
static_assert(offsetof(UWeaponButtonView_C, Img_thumbnail) == 0x0002B8, "Member 'UWeaponButtonView_C::Img_thumbnail' has a wrong offset!");
static_assert(offsetof(UWeaponButtonView_C, Txt_Atk) == 0x0002C0, "Member 'UWeaponButtonView_C::Txt_Atk' has a wrong offset!");
static_assert(offsetof(UWeaponButtonView_C, Txt_AttrbAtk) == 0x0002C8, "Member 'UWeaponButtonView_C::Txt_AttrbAtk' has a wrong offset!");
static_assert(offsetof(UWeaponButtonView_C, Txt_Crt) == 0x0002D0, "Member 'UWeaponButtonView_C::Txt_Crt' has a wrong offset!");
static_assert(offsetof(UWeaponButtonView_C, Txt_Level) == 0x0002D8, "Member 'UWeaponButtonView_C::Txt_Level' has a wrong offset!");
static_assert(offsetof(UWeaponButtonView_C, Txt_VaitalValue) == 0x0002E0, "Member 'UWeaponButtonView_C::Txt_VaitalValue' has a wrong offset!");
static_assert(offsetof(UWeaponButtonView_C, Txt_Vital) == 0x0002E8, "Member 'UWeaponButtonView_C::Txt_Vital' has a wrong offset!");
static_assert(offsetof(UWeaponButtonView_C, Txt_WeaponName) == 0x0002F0, "Member 'UWeaponButtonView_C::Txt_WeaponName' has a wrong offset!");
static_assert(offsetof(UWeaponButtonView_C, WBP_StackB_L) == 0x0002F8, "Member 'UWeaponButtonView_C::WBP_StackB_L' has a wrong offset!");
static_assert(offsetof(UWeaponButtonView_C, WeaponButtonViewPerkList) == 0x000300, "Member 'UWeaponButtonView_C::WeaponButtonViewPerkList' has a wrong offset!");
static_assert(offsetof(UWeaponButtonView_C, bIsImageLoading) == 0x000308, "Member 'UWeaponButtonView_C::bIsImageLoading' has a wrong offset!");
static_assert(offsetof(UWeaponButtonView_C, LoadingIcon) == 0x000310, "Member 'UWeaponButtonView_C::LoadingIcon' has a wrong offset!");
static_assert(offsetof(UWeaponButtonView_C, LoadItemInfo) == 0x000338, "Member 'UWeaponButtonView_C::LoadItemInfo' has a wrong offset!");
static_assert(offsetof(UWeaponButtonView_C, OnClicked) == 0x000450, "Member 'UWeaponButtonView_C::OnClicked' has a wrong offset!");

}

