#pragma once

 

// Package: MapWidget_WarpPointIcon

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "SlateCore_structs.hpp"
#include "SkyBlue_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass MapWidget_WarpPointIcon.MapWidget_WarpPointIcon_C
// 0x01E0 (0x0458 - 0x0278)
class UMapWidget_WarpPointIcon_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0278(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class USBButton_C*                            Btn;                                               // 0x0280(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                           CanvasPanel_0;                                     // 0x0288(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 IconImage;                                         // 0x0290(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class FName                                   WarpPointId;                                       // 0x0298(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_             OnPressed;                                         // 0x02A0(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	struct FSBMasterWarpPoint                     WarpPointMasterData;                               // 0x02B0(0x0068)(Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                          IsButtonPressEnable;                               // 0x0318(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7F6E[0x7];                                     // 0x0319(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UMapWidget_IconTooltipWarpPoint1_C*     ToolTip1;                                          // 0x0320(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMapWidget_IconTooltipWarpPoint2_C*     ToolTip2;                                          // 0x0328(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          IsWarpPointActive;                                 // 0x0330(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7F6F[0x7];                                     // 0x0331(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSlateBrush                            DefaultButtonStyle_Pressed;                        // 0x0338(0x0088)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FSlateBrush                            DefaultButtonStyle_Hovered;                        // 0x03C0(0x0088)(Edit, BlueprintVisible, DisableEditOnInstance)
	class UWidget*                                CurrTooltip;                                       // 0x0448(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          IsLocalWarpIcon;                                   // 0x0450(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          IsGrayOut;                                         // 0x0451(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          IsDungeonMode;                                     // 0x0452(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

public:
	void OnPressed__DelegateSignature(class UMapWidget_WarpPointIcon_C* InWarpPointIcon);
	void ExecuteUbergraph_MapWidget_WarpPointIcon(int32 EntryPoint);
	void BndEvt__Button_WarpPoint_K2Node_ComponentBoundEvent_239_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__Button_WarpPoint_K2Node_ComponentBoundEvent_213_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__Button_WarpPoint_K2Node_ComponentBoundEvent_179_OnButtonClickedEvent__DelegateSignature();
	void SetWarpPoint(const struct FSBMasterWarpPoint& InWarpPointData, bool IsCity);
	void SetActive(bool IsActive);
	void SetIconImage(bool Param_IsLocalWarpIcon, bool Param_IsHovered);
	void SetButtonPressEnable(bool IsEnable);
	class UWidget* GetToolTipWidget_0();
	void SetIconNormalTintColor(const struct FLinearColor& InColor);
	void SetPressedSoundId(ESystemSE InSoundId);
	void SetHoveredSoundId(ESystemSE InSoundId);
	void SetGrayOut(bool Param_IsGrayOut);
	void SetIconImageEx(bool Param_IsLocalWarpIcon, bool Param_IsHovered);
	void SetWarpPointEx(const struct FSBMasterWarpPoint& InWarpPointData, bool IsCity);
	void SetDungeonMode(bool InDungeonMode);
	void ChangeTooltipText(const class FString& InToolTipText);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"MapWidget_WarpPointIcon_C">();
	}
	static class UMapWidget_WarpPointIcon_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMapWidget_WarpPointIcon_C>();
	}
};
static_assert(alignof(UMapWidget_WarpPointIcon_C) == 0x000008, "Wrong alignment on UMapWidget_WarpPointIcon_C");
static_assert(sizeof(UMapWidget_WarpPointIcon_C) == 0x000458, "Wrong size on UMapWidget_WarpPointIcon_C");
static_assert(offsetof(UMapWidget_WarpPointIcon_C, UberGraphFrame) == 0x000278, "Member 'UMapWidget_WarpPointIcon_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UMapWidget_WarpPointIcon_C, Btn) == 0x000280, "Member 'UMapWidget_WarpPointIcon_C::Btn' has a wrong offset!");
static_assert(offsetof(UMapWidget_WarpPointIcon_C, CanvasPanel_0) == 0x000288, "Member 'UMapWidget_WarpPointIcon_C::CanvasPanel_0' has a wrong offset!");
static_assert(offsetof(UMapWidget_WarpPointIcon_C, IconImage) == 0x000290, "Member 'UMapWidget_WarpPointIcon_C::IconImage' has a wrong offset!");
static_assert(offsetof(UMapWidget_WarpPointIcon_C, WarpPointId) == 0x000298, "Member 'UMapWidget_WarpPointIcon_C::WarpPointId' has a wrong offset!");
static_assert(offsetof(UMapWidget_WarpPointIcon_C, OnPressed) == 0x0002A0, "Member 'UMapWidget_WarpPointIcon_C::OnPressed' has a wrong offset!");
static_assert(offsetof(UMapWidget_WarpPointIcon_C, WarpPointMasterData) == 0x0002B0, "Member 'UMapWidget_WarpPointIcon_C::WarpPointMasterData' has a wrong offset!");
static_assert(offsetof(UMapWidget_WarpPointIcon_C, IsButtonPressEnable) == 0x000318, "Member 'UMapWidget_WarpPointIcon_C::IsButtonPressEnable' has a wrong offset!");
static_assert(offsetof(UMapWidget_WarpPointIcon_C, ToolTip1) == 0x000320, "Member 'UMapWidget_WarpPointIcon_C::ToolTip1' has a wrong offset!");
static_assert(offsetof(UMapWidget_WarpPointIcon_C, ToolTip2) == 0x000328, "Member 'UMapWidget_WarpPointIcon_C::ToolTip2' has a wrong offset!");
static_assert(offsetof(UMapWidget_WarpPointIcon_C, IsWarpPointActive) == 0x000330, "Member 'UMapWidget_WarpPointIcon_C::IsWarpPointActive' has a wrong offset!");
static_assert(offsetof(UMapWidget_WarpPointIcon_C, DefaultButtonStyle_Pressed) == 0x000338, "Member 'UMapWidget_WarpPointIcon_C::DefaultButtonStyle_Pressed' has a wrong offset!");
static_assert(offsetof(UMapWidget_WarpPointIcon_C, DefaultButtonStyle_Hovered) == 0x0003C0, "Member 'UMapWidget_WarpPointIcon_C::DefaultButtonStyle_Hovered' has a wrong offset!");
static_assert(offsetof(UMapWidget_WarpPointIcon_C, CurrTooltip) == 0x000448, "Member 'UMapWidget_WarpPointIcon_C::CurrTooltip' has a wrong offset!");
static_assert(offsetof(UMapWidget_WarpPointIcon_C, IsLocalWarpIcon) == 0x000450, "Member 'UMapWidget_WarpPointIcon_C::IsLocalWarpIcon' has a wrong offset!");
static_assert(offsetof(UMapWidget_WarpPointIcon_C, IsGrayOut) == 0x000451, "Member 'UMapWidget_WarpPointIcon_C::IsGrayOut' has a wrong offset!");
static_assert(offsetof(UMapWidget_WarpPointIcon_C, IsDungeonMode) == 0x000452, "Member 'UMapWidget_WarpPointIcon_C::IsDungeonMode' has a wrong offset!");

}

