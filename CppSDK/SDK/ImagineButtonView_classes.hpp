#pragma once

 

// Package: ImagineButtonView

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "SkyBlue_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass ImagineButtonView.ImagineButtonView_C
// 0x01C8 (0x0440 - 0x0278)
class UImagineButtonView_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0278(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UCmnBtn16_C*                            BtnReselect;                                       // 0x0280(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCmnBonusLarge_C*                       CmnBonusLarge;                                     // 0x0288(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_1;                                           // 0x0290(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_2;                                           // 0x0298(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_241;                                         // 0x02A0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImagineTypeView_C*                     ImagineTypeView;                                   // 0x02A8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Img_thumbnail;                                     // 0x02B0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBRuntimeTextBlock*                    Txt_Atk;                                           // 0x02B8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBRuntimeTextBlock*                    Txt_Def;                                           // 0x02C0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBRuntimeTextBlock*                    Txt_ImagineName;                                   // 0x02C8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBRuntimeTextBlock*                    Txt_Level;                                         // 0x02D0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBRuntimeTextBlock*                    Txt_Vital;                                         // 0x02D8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_StackB_L_C*                        WBP_StackB_L;                                      // 0x02E0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	bool                                          bIsImageLoading;                                   // 0x02E8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6D5E[0x7];                                     // 0x02E9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TSoftObjectPtr<class UTexture2D>              LoadingIcon;                                       // 0x02F0(0x0028)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	struct FOwnItemInfo                           LoadItemInfo;                                      // 0x0318(0x0118)(Edit, BlueprintVisible, DisableEditOnInstance)
	FMulticastInlineDelegateProperty_             OnClicked;                                         // 0x0430(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)

public:
	void OnClicked__DelegateSignature();
	void ExecuteUbergraph_ImagineButtonView(int32 EntryPoint);
	void BndEvt__ImagineButtonView_CmnBtn16_K2Node_ComponentBoundEvent_1_EventOnClicked__DelegateSignature();
	void RequestLoadImage(const struct FOwnItemInfo& OwnItemInfo);
	void OnLoaded_C5545ECB498C6ABBCE6FAE8E927A4113(class UObject* Loaded);
	void ApplySelectImagine(const struct FOwnItemInfo& OwnItemInfo);
	void ApplyBasicImagineData(const struct FOwnItemInfo& ImagineData);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"ImagineButtonView_C">();
	}
	static class UImagineButtonView_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UImagineButtonView_C>();
	}
};
static_assert(alignof(UImagineButtonView_C) == 0x000008, "Wrong alignment on UImagineButtonView_C");
static_assert(sizeof(UImagineButtonView_C) == 0x000440, "Wrong size on UImagineButtonView_C");
static_assert(offsetof(UImagineButtonView_C, UberGraphFrame) == 0x000278, "Member 'UImagineButtonView_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UImagineButtonView_C, BtnReselect) == 0x000280, "Member 'UImagineButtonView_C::BtnReselect' has a wrong offset!");
static_assert(offsetof(UImagineButtonView_C, CmnBonusLarge) == 0x000288, "Member 'UImagineButtonView_C::CmnBonusLarge' has a wrong offset!");
static_assert(offsetof(UImagineButtonView_C, Image_1) == 0x000290, "Member 'UImagineButtonView_C::Image_1' has a wrong offset!");
static_assert(offsetof(UImagineButtonView_C, Image_2) == 0x000298, "Member 'UImagineButtonView_C::Image_2' has a wrong offset!");
static_assert(offsetof(UImagineButtonView_C, Image_241) == 0x0002A0, "Member 'UImagineButtonView_C::Image_241' has a wrong offset!");
static_assert(offsetof(UImagineButtonView_C, ImagineTypeView) == 0x0002A8, "Member 'UImagineButtonView_C::ImagineTypeView' has a wrong offset!");
static_assert(offsetof(UImagineButtonView_C, Img_thumbnail) == 0x0002B0, "Member 'UImagineButtonView_C::Img_thumbnail' has a wrong offset!");
static_assert(offsetof(UImagineButtonView_C, Txt_Atk) == 0x0002B8, "Member 'UImagineButtonView_C::Txt_Atk' has a wrong offset!");
static_assert(offsetof(UImagineButtonView_C, Txt_Def) == 0x0002C0, "Member 'UImagineButtonView_C::Txt_Def' has a wrong offset!");
static_assert(offsetof(UImagineButtonView_C, Txt_ImagineName) == 0x0002C8, "Member 'UImagineButtonView_C::Txt_ImagineName' has a wrong offset!");
static_assert(offsetof(UImagineButtonView_C, Txt_Level) == 0x0002D0, "Member 'UImagineButtonView_C::Txt_Level' has a wrong offset!");
static_assert(offsetof(UImagineButtonView_C, Txt_Vital) == 0x0002D8, "Member 'UImagineButtonView_C::Txt_Vital' has a wrong offset!");
static_assert(offsetof(UImagineButtonView_C, WBP_StackB_L) == 0x0002E0, "Member 'UImagineButtonView_C::WBP_StackB_L' has a wrong offset!");
static_assert(offsetof(UImagineButtonView_C, bIsImageLoading) == 0x0002E8, "Member 'UImagineButtonView_C::bIsImageLoading' has a wrong offset!");
static_assert(offsetof(UImagineButtonView_C, LoadingIcon) == 0x0002F0, "Member 'UImagineButtonView_C::LoadingIcon' has a wrong offset!");
static_assert(offsetof(UImagineButtonView_C, LoadItemInfo) == 0x000318, "Member 'UImagineButtonView_C::LoadItemInfo' has a wrong offset!");
static_assert(offsetof(UImagineButtonView_C, OnClicked) == 0x000430, "Member 'UImagineButtonView_C::OnClicked' has a wrong offset!");

}

