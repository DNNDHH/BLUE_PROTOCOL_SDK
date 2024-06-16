#pragma once

 

// Package: Fishing_Cast

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "SkyBlue_structs.hpp"
#include "Fishing_LineTensionStruct_structs.hpp"
#include "SlateCore_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass Fishing_Cast.Fishing_Cast_C
// 0x0180 (0x03F8 - 0x0278)
class UFishing_Cast_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0278(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       TensionGauge_;                                     // 0x0280(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       FishingFail_;                                      // 0x0288(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       FishingSuccess_;                                   // 0x0290(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       HookSuccess_;                                      // 0x0298(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       Fighting_;                                         // 0x02A0(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UCanvasPanel*                           CanvasPanel_FishIcon;                              // 0x02A8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                           CanvasPanel_Gauge;                                 // 0x02B0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Circle01;                                          // 0x02B8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Circle02;                                          // 0x02C0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Circle03;                                          // 0x02C8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UEditableTextBox*                       EditableTextBox_Cast;                              // 0x02D0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UEditableTextBox*                       EditableTextBox_Hook;                              // 0x02D8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 FishBackGround;                                    // 0x02E0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 FishIcon;                                          // 0x02E8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Fishing_BG01;                                      // 0x02F0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             FishingFail_Text;                                  // 0x02F8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                           FishingFight_Panel;                                // 0x0300(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             FishingSuccess_Text;                               // 0x0308(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             HookSuccess_Text;                                  // 0x0310(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 LineTensionGauge;                                  // 0x0318(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 LineTensionGauge_Frame;                            // 0x0320(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 LineTensionGauge_FrameIcon;                        // 0x0328(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBRuntimeTextBlock*                    RuntimeText_Cast;                                  // 0x0330(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBRuntimeTextBlock*                    RuntimeText_Hook_1;                                // 0x0338(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             TensionPercent;                                    // 0x0340(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	struct FSlateBrush                            ColorStaminaGauge;                                 // 0x0348(0x0088)(Edit, BlueprintVisible, DisableEditOnInstance)
	float                                         InitPos;                                           // 0x03D0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         FishDistanceBuff;                                  // 0x03D4(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FFishing_LineTensionStruct>     LineTensionColorData;                              // 0x03D8(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	class UWidgetAnimation*                       LineTensionAnimation;                              // 0x03E8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         DefaultGaugeSizeX;                                 // 0x03F0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_Fishing_Cast(int32 EntryPoint);
	void Construct();
	void PreConstruct(bool IsDesignTime);
	void SetStaminaGauge(float CurentStamina, float MaxStamina);
	void SetTensionGauge(float TensionValue);
	struct FSlateBrush Get_FishStaminaGauge_Brush_0();
	void InitFishIconPos();
	void InitLineTensionColorData();
	void UpdateLineColor(float LineTensionPercentage, struct FLinearColor* NewParam);
	void AnimHookSuccess();
	void AnimSuccess();
	void AnimFail();
	void HookSuccess();
	void Init();
	void Reset();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"Fishing_Cast_C">();
	}
	static class UFishing_Cast_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFishing_Cast_C>();
	}
};
static_assert(alignof(UFishing_Cast_C) == 0x000008, "Wrong alignment on UFishing_Cast_C");
static_assert(sizeof(UFishing_Cast_C) == 0x0003F8, "Wrong size on UFishing_Cast_C");
static_assert(offsetof(UFishing_Cast_C, UberGraphFrame) == 0x000278, "Member 'UFishing_Cast_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UFishing_Cast_C, TensionGauge_) == 0x000280, "Member 'UFishing_Cast_C::TensionGauge_' has a wrong offset!");
static_assert(offsetof(UFishing_Cast_C, FishingFail_) == 0x000288, "Member 'UFishing_Cast_C::FishingFail_' has a wrong offset!");
static_assert(offsetof(UFishing_Cast_C, FishingSuccess_) == 0x000290, "Member 'UFishing_Cast_C::FishingSuccess_' has a wrong offset!");
static_assert(offsetof(UFishing_Cast_C, HookSuccess_) == 0x000298, "Member 'UFishing_Cast_C::HookSuccess_' has a wrong offset!");
static_assert(offsetof(UFishing_Cast_C, Fighting_) == 0x0002A0, "Member 'UFishing_Cast_C::Fighting_' has a wrong offset!");
static_assert(offsetof(UFishing_Cast_C, CanvasPanel_FishIcon) == 0x0002A8, "Member 'UFishing_Cast_C::CanvasPanel_FishIcon' has a wrong offset!");
static_assert(offsetof(UFishing_Cast_C, CanvasPanel_Gauge) == 0x0002B0, "Member 'UFishing_Cast_C::CanvasPanel_Gauge' has a wrong offset!");
static_assert(offsetof(UFishing_Cast_C, Circle01) == 0x0002B8, "Member 'UFishing_Cast_C::Circle01' has a wrong offset!");
static_assert(offsetof(UFishing_Cast_C, Circle02) == 0x0002C0, "Member 'UFishing_Cast_C::Circle02' has a wrong offset!");
static_assert(offsetof(UFishing_Cast_C, Circle03) == 0x0002C8, "Member 'UFishing_Cast_C::Circle03' has a wrong offset!");
static_assert(offsetof(UFishing_Cast_C, EditableTextBox_Cast) == 0x0002D0, "Member 'UFishing_Cast_C::EditableTextBox_Cast' has a wrong offset!");
static_assert(offsetof(UFishing_Cast_C, EditableTextBox_Hook) == 0x0002D8, "Member 'UFishing_Cast_C::EditableTextBox_Hook' has a wrong offset!");
static_assert(offsetof(UFishing_Cast_C, FishBackGround) == 0x0002E0, "Member 'UFishing_Cast_C::FishBackGround' has a wrong offset!");
static_assert(offsetof(UFishing_Cast_C, FishIcon) == 0x0002E8, "Member 'UFishing_Cast_C::FishIcon' has a wrong offset!");
static_assert(offsetof(UFishing_Cast_C, Fishing_BG01) == 0x0002F0, "Member 'UFishing_Cast_C::Fishing_BG01' has a wrong offset!");
static_assert(offsetof(UFishing_Cast_C, FishingFail_Text) == 0x0002F8, "Member 'UFishing_Cast_C::FishingFail_Text' has a wrong offset!");
static_assert(offsetof(UFishing_Cast_C, FishingFight_Panel) == 0x000300, "Member 'UFishing_Cast_C::FishingFight_Panel' has a wrong offset!");
static_assert(offsetof(UFishing_Cast_C, FishingSuccess_Text) == 0x000308, "Member 'UFishing_Cast_C::FishingSuccess_Text' has a wrong offset!");
static_assert(offsetof(UFishing_Cast_C, HookSuccess_Text) == 0x000310, "Member 'UFishing_Cast_C::HookSuccess_Text' has a wrong offset!");
static_assert(offsetof(UFishing_Cast_C, LineTensionGauge) == 0x000318, "Member 'UFishing_Cast_C::LineTensionGauge' has a wrong offset!");
static_assert(offsetof(UFishing_Cast_C, LineTensionGauge_Frame) == 0x000320, "Member 'UFishing_Cast_C::LineTensionGauge_Frame' has a wrong offset!");
static_assert(offsetof(UFishing_Cast_C, LineTensionGauge_FrameIcon) == 0x000328, "Member 'UFishing_Cast_C::LineTensionGauge_FrameIcon' has a wrong offset!");
static_assert(offsetof(UFishing_Cast_C, RuntimeText_Cast) == 0x000330, "Member 'UFishing_Cast_C::RuntimeText_Cast' has a wrong offset!");
static_assert(offsetof(UFishing_Cast_C, RuntimeText_Hook_1) == 0x000338, "Member 'UFishing_Cast_C::RuntimeText_Hook_1' has a wrong offset!");
static_assert(offsetof(UFishing_Cast_C, TensionPercent) == 0x000340, "Member 'UFishing_Cast_C::TensionPercent' has a wrong offset!");
static_assert(offsetof(UFishing_Cast_C, ColorStaminaGauge) == 0x000348, "Member 'UFishing_Cast_C::ColorStaminaGauge' has a wrong offset!");
static_assert(offsetof(UFishing_Cast_C, InitPos) == 0x0003D0, "Member 'UFishing_Cast_C::InitPos' has a wrong offset!");
static_assert(offsetof(UFishing_Cast_C, FishDistanceBuff) == 0x0003D4, "Member 'UFishing_Cast_C::FishDistanceBuff' has a wrong offset!");
static_assert(offsetof(UFishing_Cast_C, LineTensionColorData) == 0x0003D8, "Member 'UFishing_Cast_C::LineTensionColorData' has a wrong offset!");
static_assert(offsetof(UFishing_Cast_C, LineTensionAnimation) == 0x0003E8, "Member 'UFishing_Cast_C::LineTensionAnimation' has a wrong offset!");
static_assert(offsetof(UFishing_Cast_C, DefaultGaugeSizeX) == 0x0003F0, "Member 'UFishing_Cast_C::DefaultGaugeSizeX' has a wrong offset!");

}

