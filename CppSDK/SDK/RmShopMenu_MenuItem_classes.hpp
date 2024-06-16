#pragma once

 

// Package: RmShopMenu_MenuItem

#include "Basic.hpp"

#include "SkyBlue_structs.hpp"
#include "Engine_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass RmShopMenu_MenuItem.RmShopMenu_MenuItem_C
// 0x0058 (0x02D0 - 0x0278)
class URmShopMenu_MenuItem_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0278(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       AnimInOut;                                         // 0x0280(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class USBButton_C*                            BtnHit;                                            // 0x0288(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 SeasonPassFlagBg;                                  // 0x0290(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBRuntimeTextBlock*                    Txt_MenuLabel;                                     // 0x0298(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetSwitcher*                        WidgetSwitcher_SeasonPassFlag;                     // 0x02A0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	int32                                         InTextID;                                          // 0x02A8(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	uint8                                         Pad_5664[0x4];                                     // 0x02AC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	FMulticastInlineDelegateProperty_             OnClicked;                                         // 0x02B0(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	class FName                                   InTextName;                                        // 0x02C0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ENewMarkContentType                           NewMarkSeasonPassFlag_New;                         // 0x02C8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ENewMarkContentType                           NewMarkSeasonPassFlag_End;                         // 0x02C9(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ENewMarkContentType                           NewMarkSeasonPassFlag_ReceiveEnd;                  // 0x02CA(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void OnClicked__DelegateSignature();
	void ExecuteUbergraph_RmShopMenu_MenuItem(int32 EntryPoint);
	void UpdateSeasonPassFlag();
	void OnUpdateSeasonPassAnyInfo(class UObject* Sender, class UObject* Param);
	void Destruct();
	void BndEvt__BtnHit_K2Node_ComponentBoundEvent_0_OnButtonPressedEvent__DelegateSignature();
	void Construct();
	void PreConstruct(bool IsDesignTime);
	void SelectBtn(bool bSelected);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"RmShopMenu_MenuItem_C">();
	}
	static class URmShopMenu_MenuItem_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<URmShopMenu_MenuItem_C>();
	}
};
static_assert(alignof(URmShopMenu_MenuItem_C) == 0x000008, "Wrong alignment on URmShopMenu_MenuItem_C");
static_assert(sizeof(URmShopMenu_MenuItem_C) == 0x0002D0, "Wrong size on URmShopMenu_MenuItem_C");
static_assert(offsetof(URmShopMenu_MenuItem_C, UberGraphFrame) == 0x000278, "Member 'URmShopMenu_MenuItem_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(URmShopMenu_MenuItem_C, AnimInOut) == 0x000280, "Member 'URmShopMenu_MenuItem_C::AnimInOut' has a wrong offset!");
static_assert(offsetof(URmShopMenu_MenuItem_C, BtnHit) == 0x000288, "Member 'URmShopMenu_MenuItem_C::BtnHit' has a wrong offset!");
static_assert(offsetof(URmShopMenu_MenuItem_C, SeasonPassFlagBg) == 0x000290, "Member 'URmShopMenu_MenuItem_C::SeasonPassFlagBg' has a wrong offset!");
static_assert(offsetof(URmShopMenu_MenuItem_C, Txt_MenuLabel) == 0x000298, "Member 'URmShopMenu_MenuItem_C::Txt_MenuLabel' has a wrong offset!");
static_assert(offsetof(URmShopMenu_MenuItem_C, WidgetSwitcher_SeasonPassFlag) == 0x0002A0, "Member 'URmShopMenu_MenuItem_C::WidgetSwitcher_SeasonPassFlag' has a wrong offset!");
static_assert(offsetof(URmShopMenu_MenuItem_C, InTextID) == 0x0002A8, "Member 'URmShopMenu_MenuItem_C::InTextID' has a wrong offset!");
static_assert(offsetof(URmShopMenu_MenuItem_C, OnClicked) == 0x0002B0, "Member 'URmShopMenu_MenuItem_C::OnClicked' has a wrong offset!");
static_assert(offsetof(URmShopMenu_MenuItem_C, InTextName) == 0x0002C0, "Member 'URmShopMenu_MenuItem_C::InTextName' has a wrong offset!");
static_assert(offsetof(URmShopMenu_MenuItem_C, NewMarkSeasonPassFlag_New) == 0x0002C8, "Member 'URmShopMenu_MenuItem_C::NewMarkSeasonPassFlag_New' has a wrong offset!");
static_assert(offsetof(URmShopMenu_MenuItem_C, NewMarkSeasonPassFlag_End) == 0x0002C9, "Member 'URmShopMenu_MenuItem_C::NewMarkSeasonPassFlag_End' has a wrong offset!");
static_assert(offsetof(URmShopMenu_MenuItem_C, NewMarkSeasonPassFlag_ReceiveEnd) == 0x0002CA, "Member 'URmShopMenu_MenuItem_C::NewMarkSeasonPassFlag_ReceiveEnd' has a wrong offset!");

}

