#pragma once

 

// Package: CmnBtnWishListWhite

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_classes.hpp"
#include "SkyBlue_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass CmnBtnWishListWhite.CmnBtnWishListWhite_C
// 0x0060 (0x02D8 - 0x0278)
class UCmnBtnWishListWhite_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0278(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class USBButton_C*                            Btn01;                                             // 0x0280(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_IconAdd;                                     // 0x0288(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_IconDelete;                                  // 0x0290(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             Txt1;                                              // 0x0298(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetSwitcher*                        WidgetSwitcher_Icon;                               // 0x02A0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBTextTableAsset*                      InTextTable;                                       // 0x02A8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         InTextID;                                          // 0x02B0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_6C9E[0x4];                                     // 0x02B4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	FMulticastInlineDelegateProperty_             EventOnClicked;                                    // 0x02B8(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	class FName                                   InTextName;                                        // 0x02C8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bFocus;                                            // 0x02D0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

public:
	void EventOnClicked__DelegateSignature();
	void ExecuteUbergraph_CmnBtnWishListWhite(int32 EntryPoint);
	void BndEvt__Btn01_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__Btn01_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__Btn01_K2Node_ComponentBoundEvent_51_OnButtonClickedEvent__DelegateSignature();
	void PreConstruct(bool IsDesignTime);
	void SetText(const class FText& InText);
	void SetPressedSoundId(ESystemSE InSoundId);
	void SetHoveredSoundId(ESystemSE InSoundId);
	void Set_Btn(bool IsRegist);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"CmnBtnWishListWhite_C">();
	}
	static class UCmnBtnWishListWhite_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UCmnBtnWishListWhite_C>();
	}
};
static_assert(alignof(UCmnBtnWishListWhite_C) == 0x000008, "Wrong alignment on UCmnBtnWishListWhite_C");
static_assert(sizeof(UCmnBtnWishListWhite_C) == 0x0002D8, "Wrong size on UCmnBtnWishListWhite_C");
static_assert(offsetof(UCmnBtnWishListWhite_C, UberGraphFrame) == 0x000278, "Member 'UCmnBtnWishListWhite_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UCmnBtnWishListWhite_C, Btn01) == 0x000280, "Member 'UCmnBtnWishListWhite_C::Btn01' has a wrong offset!");
static_assert(offsetof(UCmnBtnWishListWhite_C, Image_IconAdd) == 0x000288, "Member 'UCmnBtnWishListWhite_C::Image_IconAdd' has a wrong offset!");
static_assert(offsetof(UCmnBtnWishListWhite_C, Image_IconDelete) == 0x000290, "Member 'UCmnBtnWishListWhite_C::Image_IconDelete' has a wrong offset!");
static_assert(offsetof(UCmnBtnWishListWhite_C, Txt1) == 0x000298, "Member 'UCmnBtnWishListWhite_C::Txt1' has a wrong offset!");
static_assert(offsetof(UCmnBtnWishListWhite_C, WidgetSwitcher_Icon) == 0x0002A0, "Member 'UCmnBtnWishListWhite_C::WidgetSwitcher_Icon' has a wrong offset!");
static_assert(offsetof(UCmnBtnWishListWhite_C, InTextTable) == 0x0002A8, "Member 'UCmnBtnWishListWhite_C::InTextTable' has a wrong offset!");
static_assert(offsetof(UCmnBtnWishListWhite_C, InTextID) == 0x0002B0, "Member 'UCmnBtnWishListWhite_C::InTextID' has a wrong offset!");
static_assert(offsetof(UCmnBtnWishListWhite_C, EventOnClicked) == 0x0002B8, "Member 'UCmnBtnWishListWhite_C::EventOnClicked' has a wrong offset!");
static_assert(offsetof(UCmnBtnWishListWhite_C, InTextName) == 0x0002C8, "Member 'UCmnBtnWishListWhite_C::InTextName' has a wrong offset!");
static_assert(offsetof(UCmnBtnWishListWhite_C, bFocus) == 0x0002D0, "Member 'UCmnBtnWishListWhite_C::bFocus' has a wrong offset!");

}

