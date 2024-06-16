#pragma once

 

// Package: UMG_AestheShopStepInfo_StepIcon

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass UMG_AestheShopStepInfo_StepIcon.UMG_AestheShopStepInfo_StepIcon_C
// 0x0048 (0x02C0 - 0x0278)
class UUMG_AestheShopStepInfo_StepIcon_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0278(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       Anm_StepInfo_On;                                   // 0x0280(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UImage*                                 IconSelected;                                      // 0x0288(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 IconSelected_Eff;                                  // 0x0290(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 IconSelected_Line;                                 // 0x0298(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 IconUnselected;                                    // 0x02A0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                           SelectedGrp;                                       // 0x02A8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBRuntimeTextBlock*                    TxtTitle;                                          // 0x02B0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	int32                                         TitleTextId;                                       // 0x02B8(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_UMG_AestheShopStepInfo_StepIcon(int32 EntryPoint);
	void PreConstruct(bool IsDesignTime);
	void SetIconSelected(bool InIsSelected);
	void SetTitleTextId(int32 InTextID);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"UMG_AestheShopStepInfo_StepIcon_C">();
	}
	static class UUMG_AestheShopStepInfo_StepIcon_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UUMG_AestheShopStepInfo_StepIcon_C>();
	}
};
static_assert(alignof(UUMG_AestheShopStepInfo_StepIcon_C) == 0x000008, "Wrong alignment on UUMG_AestheShopStepInfo_StepIcon_C");
static_assert(sizeof(UUMG_AestheShopStepInfo_StepIcon_C) == 0x0002C0, "Wrong size on UUMG_AestheShopStepInfo_StepIcon_C");
static_assert(offsetof(UUMG_AestheShopStepInfo_StepIcon_C, UberGraphFrame) == 0x000278, "Member 'UUMG_AestheShopStepInfo_StepIcon_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UUMG_AestheShopStepInfo_StepIcon_C, Anm_StepInfo_On) == 0x000280, "Member 'UUMG_AestheShopStepInfo_StepIcon_C::Anm_StepInfo_On' has a wrong offset!");
static_assert(offsetof(UUMG_AestheShopStepInfo_StepIcon_C, IconSelected) == 0x000288, "Member 'UUMG_AestheShopStepInfo_StepIcon_C::IconSelected' has a wrong offset!");
static_assert(offsetof(UUMG_AestheShopStepInfo_StepIcon_C, IconSelected_Eff) == 0x000290, "Member 'UUMG_AestheShopStepInfo_StepIcon_C::IconSelected_Eff' has a wrong offset!");
static_assert(offsetof(UUMG_AestheShopStepInfo_StepIcon_C, IconSelected_Line) == 0x000298, "Member 'UUMG_AestheShopStepInfo_StepIcon_C::IconSelected_Line' has a wrong offset!");
static_assert(offsetof(UUMG_AestheShopStepInfo_StepIcon_C, IconUnselected) == 0x0002A0, "Member 'UUMG_AestheShopStepInfo_StepIcon_C::IconUnselected' has a wrong offset!");
static_assert(offsetof(UUMG_AestheShopStepInfo_StepIcon_C, SelectedGrp) == 0x0002A8, "Member 'UUMG_AestheShopStepInfo_StepIcon_C::SelectedGrp' has a wrong offset!");
static_assert(offsetof(UUMG_AestheShopStepInfo_StepIcon_C, TxtTitle) == 0x0002B0, "Member 'UUMG_AestheShopStepInfo_StepIcon_C::TxtTitle' has a wrong offset!");
static_assert(offsetof(UUMG_AestheShopStepInfo_StepIcon_C, TitleTextId) == 0x0002B8, "Member 'UUMG_AestheShopStepInfo_StepIcon_C::TitleTextId' has a wrong offset!");

}

