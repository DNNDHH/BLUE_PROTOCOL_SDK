#pragma once

 

// Package: MapWidget_CommonSymbolIcon

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_classes.hpp"
#include "SkyBlue_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass MapWidget_CommonSymbolIcon.MapWidget_CommonSymbolIcon_C
// 0x0058 (0x02D0 - 0x0278)
class UMapWidget_CommonSymbolIcon_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0278(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       AnimPublicDungeon;                                 // 0x0280(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class USBButton_C*                            Btn;                                               // 0x0288(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                           CanvasPanel_0;                                     // 0x0290(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_Icon;                                        // 0x0298(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_Icon_Effect;                                 // 0x02A0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                               TooltipHit;                                        // 0x02A8(0x0008)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	bool                                          IsToolTipEnable;                                   // 0x02B0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)
	uint8                                         Pad_7ED9[0x7];                                     // 0x02B1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UMapWidget_IconTooltip1_C*              ToolTip;                                           // 0x02B8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                 TooltipString;                                     // 0x02C0(0x0010)(Edit, BlueprintVisible, ZeroConstructor, ExposeOnSpawn, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_MapWidget_CommonSymbolIcon(int32 EntryPoint);
	void PlayPublicDungeonAnimation();
	void Construct();
	class UWidget* GetToolTipWidget_0();
	void SetTooltipEnable(bool IsEnable);
	void SetTextToTooltip(const class FText& InText);
	void SetIconTexture(class UTexture2D* InTexture);
	void SetIconTextureBySymbolIconType(EMapSymbolIconType InSymbolIconType);
	void GetTooltipText(class FString* OutTooltipText);
	void SetTooltipTextColor(const struct FSlateColor& InColorAndOpacity);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"MapWidget_CommonSymbolIcon_C">();
	}
	static class UMapWidget_CommonSymbolIcon_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMapWidget_CommonSymbolIcon_C>();
	}
};
static_assert(alignof(UMapWidget_CommonSymbolIcon_C) == 0x000008, "Wrong alignment on UMapWidget_CommonSymbolIcon_C");
static_assert(sizeof(UMapWidget_CommonSymbolIcon_C) == 0x0002D0, "Wrong size on UMapWidget_CommonSymbolIcon_C");
static_assert(offsetof(UMapWidget_CommonSymbolIcon_C, UberGraphFrame) == 0x000278, "Member 'UMapWidget_CommonSymbolIcon_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UMapWidget_CommonSymbolIcon_C, AnimPublicDungeon) == 0x000280, "Member 'UMapWidget_CommonSymbolIcon_C::AnimPublicDungeon' has a wrong offset!");
static_assert(offsetof(UMapWidget_CommonSymbolIcon_C, Btn) == 0x000288, "Member 'UMapWidget_CommonSymbolIcon_C::Btn' has a wrong offset!");
static_assert(offsetof(UMapWidget_CommonSymbolIcon_C, CanvasPanel_0) == 0x000290, "Member 'UMapWidget_CommonSymbolIcon_C::CanvasPanel_0' has a wrong offset!");
static_assert(offsetof(UMapWidget_CommonSymbolIcon_C, Image_Icon) == 0x000298, "Member 'UMapWidget_CommonSymbolIcon_C::Image_Icon' has a wrong offset!");
static_assert(offsetof(UMapWidget_CommonSymbolIcon_C, Image_Icon_Effect) == 0x0002A0, "Member 'UMapWidget_CommonSymbolIcon_C::Image_Icon_Effect' has a wrong offset!");
static_assert(offsetof(UMapWidget_CommonSymbolIcon_C, TooltipHit) == 0x0002A8, "Member 'UMapWidget_CommonSymbolIcon_C::TooltipHit' has a wrong offset!");
static_assert(offsetof(UMapWidget_CommonSymbolIcon_C, IsToolTipEnable) == 0x0002B0, "Member 'UMapWidget_CommonSymbolIcon_C::IsToolTipEnable' has a wrong offset!");
static_assert(offsetof(UMapWidget_CommonSymbolIcon_C, ToolTip) == 0x0002B8, "Member 'UMapWidget_CommonSymbolIcon_C::ToolTip' has a wrong offset!");
static_assert(offsetof(UMapWidget_CommonSymbolIcon_C, TooltipString) == 0x0002C0, "Member 'UMapWidget_CommonSymbolIcon_C::TooltipString' has a wrong offset!");

}

