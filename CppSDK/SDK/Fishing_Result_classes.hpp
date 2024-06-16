#pragma once

 

// Package: Fishing_Result

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_classes.hpp"
#include "SkyBlue_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass Fishing_Result.Fishing_Result_C
// 0x0090 (0x0308 - 0x0278)
class UFishing_Result_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0278(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       Fade_all;                                          // 0x0280(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       Slidein;                                           // 0x0288(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UCanvasPanel*                           CanvasPanel_CantGet;                               // 0x0290(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UDialogButton_C*                        ContinueBtn;                                       // 0x0298(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UEditableTextBox*                       EditableTextBox_01;                                // 0x02A0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UDialogButton_C*                        ExitBtn;                                           // 0x02A8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 FishIcon;                                          // 0x02B0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Fishing_BG01;                                      // 0x02B8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Fishing_BG02;                                      // 0x02C0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Fishing_Line01;                                    // 0x02C8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UFishingPlate_C*                        FishingPlate;                                      // 0x02D0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 InfoIcon;                                          // 0x02D8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 ItemIcon;                                          // 0x02E0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBRuntimeTextBlock*                    SBRuntimeTextBlock_273;                            // 0x02E8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             TextBlock_134;                                     // 0x02F0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class FString                                 Fish_Id;                                           // 0x02F8(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_Fishing_Result(int32 EntryPoint);
	void PreConstruct(bool IsDesignTime);
	void SetThumnailIcon(int32 ItemId);
	void Destruct();
	void BndEvt__Fishing_Result_ContinueBtn_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature(class UUserWidget* InButtonWidget);
	void BndEvt__Fishing_Result_ExitBtn_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature(class UUserWidget* InButtonWidget);
	void AnimStart();
	void Construct();
	void OnLoaded_B741E7294084427C7364DF8A5FD7B5FB(class UObject* Loaded);
	void SetFishPlate(bool UploadSuccess, int32 ReturnCode, const class FString& FishId, const class FString& ItemName, float FishLength, int32 ItemAmount, bool IsNewFish, bool IsNewRecord, bool IsBig, int32 ItemId);
	void CheckItemStorage(bool* Ret);
	void CheckBackPack(bool* Ret);
	void ShowCan_tGetFish(bool TrueIsVisible);
	void ShowCan_tGetItem(bool TrueIsVisible);
	void Reuslt_Visibility(bool On);
	void SetThumbnail(const class FString& FishId, bool IsBig, int32 ItemId);
	void CheckErrorCode(int32 RetCode);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"Fishing_Result_C">();
	}
	static class UFishing_Result_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFishing_Result_C>();
	}
};
static_assert(alignof(UFishing_Result_C) == 0x000008, "Wrong alignment on UFishing_Result_C");
static_assert(sizeof(UFishing_Result_C) == 0x000308, "Wrong size on UFishing_Result_C");
static_assert(offsetof(UFishing_Result_C, UberGraphFrame) == 0x000278, "Member 'UFishing_Result_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UFishing_Result_C, Fade_all) == 0x000280, "Member 'UFishing_Result_C::Fade_all' has a wrong offset!");
static_assert(offsetof(UFishing_Result_C, Slidein) == 0x000288, "Member 'UFishing_Result_C::Slidein' has a wrong offset!");
static_assert(offsetof(UFishing_Result_C, CanvasPanel_CantGet) == 0x000290, "Member 'UFishing_Result_C::CanvasPanel_CantGet' has a wrong offset!");
static_assert(offsetof(UFishing_Result_C, ContinueBtn) == 0x000298, "Member 'UFishing_Result_C::ContinueBtn' has a wrong offset!");
static_assert(offsetof(UFishing_Result_C, EditableTextBox_01) == 0x0002A0, "Member 'UFishing_Result_C::EditableTextBox_01' has a wrong offset!");
static_assert(offsetof(UFishing_Result_C, ExitBtn) == 0x0002A8, "Member 'UFishing_Result_C::ExitBtn' has a wrong offset!");
static_assert(offsetof(UFishing_Result_C, FishIcon) == 0x0002B0, "Member 'UFishing_Result_C::FishIcon' has a wrong offset!");
static_assert(offsetof(UFishing_Result_C, Fishing_BG01) == 0x0002B8, "Member 'UFishing_Result_C::Fishing_BG01' has a wrong offset!");
static_assert(offsetof(UFishing_Result_C, Fishing_BG02) == 0x0002C0, "Member 'UFishing_Result_C::Fishing_BG02' has a wrong offset!");
static_assert(offsetof(UFishing_Result_C, Fishing_Line01) == 0x0002C8, "Member 'UFishing_Result_C::Fishing_Line01' has a wrong offset!");
static_assert(offsetof(UFishing_Result_C, FishingPlate) == 0x0002D0, "Member 'UFishing_Result_C::FishingPlate' has a wrong offset!");
static_assert(offsetof(UFishing_Result_C, InfoIcon) == 0x0002D8, "Member 'UFishing_Result_C::InfoIcon' has a wrong offset!");
static_assert(offsetof(UFishing_Result_C, ItemIcon) == 0x0002E0, "Member 'UFishing_Result_C::ItemIcon' has a wrong offset!");
static_assert(offsetof(UFishing_Result_C, SBRuntimeTextBlock_273) == 0x0002E8, "Member 'UFishing_Result_C::SBRuntimeTextBlock_273' has a wrong offset!");
static_assert(offsetof(UFishing_Result_C, TextBlock_134) == 0x0002F0, "Member 'UFishing_Result_C::TextBlock_134' has a wrong offset!");
static_assert(offsetof(UFishing_Result_C, Fish_Id) == 0x0002F8, "Member 'UFishing_Result_C::Fish_Id' has a wrong offset!");

}

