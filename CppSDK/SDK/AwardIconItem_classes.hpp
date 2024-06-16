#pragma once

 

// Package: AwardIconItem

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "SlateCore_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass AwardIconItem.AwardIconItem_C
// 0x0248 (0x04C0 - 0x0278)
class UAwardIconItem_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0278(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UImage*                                 AwardIconBgEffect;                                 // 0x0280(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UButton*                                AwardIconBtn_Hide;                                 // 0x0288(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UButton*                                AwardIconBtn_NoData;                               // 0x0290(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UButton*                                AwardIconBtn_SetData;                              // 0x0298(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetSwitcher*                        WidgetSwitcher_81;                                 // 0x02A0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_             ClickedBtnAwardList;                               // 0x02A8(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	bool                                          IsToolTips;                                        // 0x02B8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_532B[0x7];                                     // 0x02B9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UWBP_CommonToolTipDetail_Fixed_C*       ToolTip;                                           // 0x02C0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         AwardId;                                           // 0x02C8(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_532C[0x4];                                     // 0x02CC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UTexture2D*                             AwardIconTexture;                                  // 0x02D0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FSlateBrush                            BgEffectHovered;                                   // 0x02D8(0x0088)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FSlateBrush                            BgEffectPressed;                                   // 0x0360(0x0088)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FSlateBrush                            BgEffectNormal;                                    // 0x03E8(0x0088)(Edit, BlueprintVisible, DisableEditOnInstance)
	TSoftObjectPtr<class UTexture2D>              NowLoadTexture;                                    // 0x0470(0x0028)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	TSoftObjectPtr<class UTexture2D>              WaitLoadTexture;                                   // 0x0498(0x0028)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)

public:
	void ClickedBtnAwardList__DelegateSignature(int32 OutAwardId);
	void ExecuteUbergraph_AwardIconItem(int32 EntryPoint);
	void Destruct();
	void IconLoadRequestCheckStart();
	void IconLoadStart(TSoftObjectPtr<class UTexture2D> Param_NowLoadTexture);
	void IconLoadRequest(TSoftObjectPtr<class UTexture2D> TextureReference);
	void BndEvt__AwardIconItem_AwardIconBtn_Hide_K2Node_ComponentBoundEvent_7_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__AwardIconItem_AwardIconBtn_SetData_K2Node_ComponentBoundEvent_5_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__AwardIconItem_AwardIconBtn_SetData_K2Node_ComponentBoundEvent_4_OnButtonPressedEvent__DelegateSignature();
	void BndEvt__AwardIconItem_AwardIconBtn_Hide_K2Node_ComponentBoundEvent_8_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__AwardIconItem_AwardIconBtn_SetData_K2Node_ComponentBoundEvent_6_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__AwardIconItem_AwardIconBtn_SetData_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature();
	void Construct();
	void BndEvt__AwardIconItem_Button_148_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature();
	void SetData(int32 InId);
	void SetIsBtnEnable(bool bInIsEnabled);
	void OnLoaded_DF1405EB4B765EAB9E4E3880C6A49640(class UObject* Loaded);
	class UWBP_CommonToolTipDetail_Fixed_C* Get_AwardIconBtn_SetData_ToolTipWidget_0();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"AwardIconItem_C">();
	}
	static class UAwardIconItem_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UAwardIconItem_C>();
	}
};
static_assert(alignof(UAwardIconItem_C) == 0x000008, "Wrong alignment on UAwardIconItem_C");
static_assert(sizeof(UAwardIconItem_C) == 0x0004C0, "Wrong size on UAwardIconItem_C");
static_assert(offsetof(UAwardIconItem_C, UberGraphFrame) == 0x000278, "Member 'UAwardIconItem_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UAwardIconItem_C, AwardIconBgEffect) == 0x000280, "Member 'UAwardIconItem_C::AwardIconBgEffect' has a wrong offset!");
static_assert(offsetof(UAwardIconItem_C, AwardIconBtn_Hide) == 0x000288, "Member 'UAwardIconItem_C::AwardIconBtn_Hide' has a wrong offset!");
static_assert(offsetof(UAwardIconItem_C, AwardIconBtn_NoData) == 0x000290, "Member 'UAwardIconItem_C::AwardIconBtn_NoData' has a wrong offset!");
static_assert(offsetof(UAwardIconItem_C, AwardIconBtn_SetData) == 0x000298, "Member 'UAwardIconItem_C::AwardIconBtn_SetData' has a wrong offset!");
static_assert(offsetof(UAwardIconItem_C, WidgetSwitcher_81) == 0x0002A0, "Member 'UAwardIconItem_C::WidgetSwitcher_81' has a wrong offset!");
static_assert(offsetof(UAwardIconItem_C, ClickedBtnAwardList) == 0x0002A8, "Member 'UAwardIconItem_C::ClickedBtnAwardList' has a wrong offset!");
static_assert(offsetof(UAwardIconItem_C, IsToolTips) == 0x0002B8, "Member 'UAwardIconItem_C::IsToolTips' has a wrong offset!");
static_assert(offsetof(UAwardIconItem_C, ToolTip) == 0x0002C0, "Member 'UAwardIconItem_C::ToolTip' has a wrong offset!");
static_assert(offsetof(UAwardIconItem_C, AwardId) == 0x0002C8, "Member 'UAwardIconItem_C::AwardId' has a wrong offset!");
static_assert(offsetof(UAwardIconItem_C, AwardIconTexture) == 0x0002D0, "Member 'UAwardIconItem_C::AwardIconTexture' has a wrong offset!");
static_assert(offsetof(UAwardIconItem_C, BgEffectHovered) == 0x0002D8, "Member 'UAwardIconItem_C::BgEffectHovered' has a wrong offset!");
static_assert(offsetof(UAwardIconItem_C, BgEffectPressed) == 0x000360, "Member 'UAwardIconItem_C::BgEffectPressed' has a wrong offset!");
static_assert(offsetof(UAwardIconItem_C, BgEffectNormal) == 0x0003E8, "Member 'UAwardIconItem_C::BgEffectNormal' has a wrong offset!");
static_assert(offsetof(UAwardIconItem_C, NowLoadTexture) == 0x000470, "Member 'UAwardIconItem_C::NowLoadTexture' has a wrong offset!");
static_assert(offsetof(UAwardIconItem_C, WaitLoadTexture) == 0x000498, "Member 'UAwardIconItem_C::WaitLoadTexture' has a wrong offset!");

}

