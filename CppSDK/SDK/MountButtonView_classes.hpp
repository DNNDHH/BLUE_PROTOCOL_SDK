#pragma once

 

// Package: MountButtonView

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "SkyBlue_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass MountButtonView.MountButtonView_C
// 0x01A8 (0x0420 - 0x0278)
class UMountButtonView_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0278(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UCmnBtn16_C*                            BtnReselect;                                       // 0x0280(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCmnBonusLarge_C*                       CmnBonusLarge;                                     // 0x0288(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_0;                                           // 0x0290(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Img_thumbnail;                                     // 0x0298(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBRuntimeTextBlock*                    Txt_ImagineName;                                   // 0x02A0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBRuntimeTextBlock*                    Txt_LuckyChance;                                   // 0x02A8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBRuntimeTextBlock*                    Txt_StepName;                                      // 0x02B0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBRuntimeTextBlock*                    Txt_StepNum;                                       // 0x02B8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_StackB_L_C*                        WBP_StackB_L;                                      // 0x02C0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	bool                                          bIsImageLoading;                                   // 0x02C8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6E5A[0x7];                                     // 0x02C9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TSoftObjectPtr<class UTexture2D>              LoadingIcon;                                       // 0x02D0(0x0028)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	struct FOwnItemInfo                           LoadItemInfo;                                      // 0x02F8(0x0118)(Edit, BlueprintVisible, DisableEditOnInstance)
	FMulticastInlineDelegateProperty_             OnClicked;                                         // 0x0410(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)

public:
	void OnClicked__DelegateSignature();
	void ExecuteUbergraph_MountButtonView(int32 EntryPoint);
	void BndEvt__ImagineButtonView_CmnBtn16_K2Node_ComponentBoundEvent_1_EventOnClicked__DelegateSignature();
	void RequestLoadImage(const struct FOwnItemInfo& OwnItemInfo);
	void OnLoaded_6D26427C4AE929427C75F2A9967F76D3(class UObject* Loaded);
	void ApplySelectImagine(const struct FOwnItemInfo& OwnItemInfo);
	void ApplyBasicImagineData(const struct FOwnItemInfo& ImagineData);
	void SetStepMode3();
	void ApplyLuckyChance(const struct FOwnItemInfo& Info);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"MountButtonView_C">();
	}
	static class UMountButtonView_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMountButtonView_C>();
	}
};
static_assert(alignof(UMountButtonView_C) == 0x000008, "Wrong alignment on UMountButtonView_C");
static_assert(sizeof(UMountButtonView_C) == 0x000420, "Wrong size on UMountButtonView_C");
static_assert(offsetof(UMountButtonView_C, UberGraphFrame) == 0x000278, "Member 'UMountButtonView_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UMountButtonView_C, BtnReselect) == 0x000280, "Member 'UMountButtonView_C::BtnReselect' has a wrong offset!");
static_assert(offsetof(UMountButtonView_C, CmnBonusLarge) == 0x000288, "Member 'UMountButtonView_C::CmnBonusLarge' has a wrong offset!");
static_assert(offsetof(UMountButtonView_C, Image_0) == 0x000290, "Member 'UMountButtonView_C::Image_0' has a wrong offset!");
static_assert(offsetof(UMountButtonView_C, Img_thumbnail) == 0x000298, "Member 'UMountButtonView_C::Img_thumbnail' has a wrong offset!");
static_assert(offsetof(UMountButtonView_C, Txt_ImagineName) == 0x0002A0, "Member 'UMountButtonView_C::Txt_ImagineName' has a wrong offset!");
static_assert(offsetof(UMountButtonView_C, Txt_LuckyChance) == 0x0002A8, "Member 'UMountButtonView_C::Txt_LuckyChance' has a wrong offset!");
static_assert(offsetof(UMountButtonView_C, Txt_StepName) == 0x0002B0, "Member 'UMountButtonView_C::Txt_StepName' has a wrong offset!");
static_assert(offsetof(UMountButtonView_C, Txt_StepNum) == 0x0002B8, "Member 'UMountButtonView_C::Txt_StepNum' has a wrong offset!");
static_assert(offsetof(UMountButtonView_C, WBP_StackB_L) == 0x0002C0, "Member 'UMountButtonView_C::WBP_StackB_L' has a wrong offset!");
static_assert(offsetof(UMountButtonView_C, bIsImageLoading) == 0x0002C8, "Member 'UMountButtonView_C::bIsImageLoading' has a wrong offset!");
static_assert(offsetof(UMountButtonView_C, LoadingIcon) == 0x0002D0, "Member 'UMountButtonView_C::LoadingIcon' has a wrong offset!");
static_assert(offsetof(UMountButtonView_C, LoadItemInfo) == 0x0002F8, "Member 'UMountButtonView_C::LoadItemInfo' has a wrong offset!");
static_assert(offsetof(UMountButtonView_C, OnClicked) == 0x000410, "Member 'UMountButtonView_C::OnClicked' has a wrong offset!");

}

