#pragma once

 

// Package: EnemyNamePlate

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "SkyBlue_structs.hpp"
#include "SkyBlue_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass EnemyNamePlate.EnemyNamePlate_C
// 0x0058 (0x0360 - 0x0308)
class UEnemyNamePlate_C final : public USBEnemyNamePlateWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0308(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       InAnimation;                                       // 0x0310(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UBuffList_C*                            BuffList;                                          // 0x0318(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                           CanvasPanel_0;                                     // 0x0320(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                           HPCurSize;                                         // 0x0328(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                           HPPrevSize;                                        // 0x0330(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             LabelLV;                                           // 0x0338(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             LabelName;                                         // 0x0340(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class URetainerBox*                           RetainerBox_0;                                     // 0x0348(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	TArray<struct FLinearColor>                   TextColorList;                                     // 0x0350(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)

public:
	void ExecuteUbergraph_EnemyNamePlate(int32 EntryPoint);
	void SetScreenPositionOffset(const struct FLinearColor& InScreenPositionOffset);
	void Destruct();
	void SetDepth(const float InDepth);
	void SetHpRate(const float HPRate);
	void CustomEvent_0();
	void Construct();
	void UIVisibleSettingChangeDelegate_Event_0(ESBUIType InUIType, bool bInVisibility, bool bInInstantly);
	void UnbindUIVisibleSettingChange();
	void BindUIVisibleSettingChange();
	void Bind();
	void Unbind();
	void SetupBuffIcon();
	void SetColorText(int32 Level);
	void SetColorLV(const struct FSlateColor& InColorAndOpacity);
	void SetColorName(const struct FSlateColor& InColorAndOpacity);
	void OnDisplayStart();
	void SetLevel(const int32 Level);
	void SetName(const class FString& Param_Name);
	void ResetBuffIcon();
	void SetVisibleCanvas(bool Param_IsVisible);
	void IsShowBuddyIcon(bool* ShowBuddyIcon);
	void SetCharacter_Internal(class ASBCharacter* InCharacter);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"EnemyNamePlate_C">();
	}
	static class UEnemyNamePlate_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UEnemyNamePlate_C>();
	}
};
static_assert(alignof(UEnemyNamePlate_C) == 0x000008, "Wrong alignment on UEnemyNamePlate_C");
static_assert(sizeof(UEnemyNamePlate_C) == 0x000360, "Wrong size on UEnemyNamePlate_C");
static_assert(offsetof(UEnemyNamePlate_C, UberGraphFrame) == 0x000308, "Member 'UEnemyNamePlate_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UEnemyNamePlate_C, InAnimation) == 0x000310, "Member 'UEnemyNamePlate_C::InAnimation' has a wrong offset!");
static_assert(offsetof(UEnemyNamePlate_C, BuffList) == 0x000318, "Member 'UEnemyNamePlate_C::BuffList' has a wrong offset!");
static_assert(offsetof(UEnemyNamePlate_C, CanvasPanel_0) == 0x000320, "Member 'UEnemyNamePlate_C::CanvasPanel_0' has a wrong offset!");
static_assert(offsetof(UEnemyNamePlate_C, HPCurSize) == 0x000328, "Member 'UEnemyNamePlate_C::HPCurSize' has a wrong offset!");
static_assert(offsetof(UEnemyNamePlate_C, HPPrevSize) == 0x000330, "Member 'UEnemyNamePlate_C::HPPrevSize' has a wrong offset!");
static_assert(offsetof(UEnemyNamePlate_C, LabelLV) == 0x000338, "Member 'UEnemyNamePlate_C::LabelLV' has a wrong offset!");
static_assert(offsetof(UEnemyNamePlate_C, LabelName) == 0x000340, "Member 'UEnemyNamePlate_C::LabelName' has a wrong offset!");
static_assert(offsetof(UEnemyNamePlate_C, RetainerBox_0) == 0x000348, "Member 'UEnemyNamePlate_C::RetainerBox_0' has a wrong offset!");
static_assert(offsetof(UEnemyNamePlate_C, TextColorList) == 0x000350, "Member 'UEnemyNamePlate_C::TextColorList' has a wrong offset!");

}

