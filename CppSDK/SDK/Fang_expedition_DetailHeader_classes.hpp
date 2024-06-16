#pragma once

 

// Package: Fang_expedition_DetailHeader

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass Fang_expedition_DetailHeader.Fang_expedition_DetailHeader_C
// 0x00D8 (0x0350 - 0x0278)
class UFang_expedition_DetailHeader_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0278(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UImage*                                 AreaImage_Dgn;                                     // 0x0280(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 AreaImage_Fld;                                     // 0x0288(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetSwitcher*                        AreaImage_Switcher;                                // 0x0290(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 AreaImage_Town;                                    // 0x0298(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCmnClose01_C*                          CmnClose01;                                        // 0x02A0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHorizontalBox*                         FangHorizontalBox;                                 // 0x02A8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UFang_expedition_DetailFangImage_C*     FangImage1;                                        // 0x02B0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UFang_expedition_DetailFangImage_C*     FangImage2;                                        // 0x02B8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UFang_expedition_DetailFangImage_C*     FangImage3;                                        // 0x02C0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UFang_expedition_DetailFangImage_C*     FangImage4;                                        // 0x02C8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UFang_expedition_DetailFangImage_C*     FangImage5;                                        // 0x02D0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                               FangImagePanel;                                    // 0x02D8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                               ImageBox1;                                         // 0x02E0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                               ImageBox2;                                         // 0x02E8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                               ImageBox3;                                         // 0x02F0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                               ImageBox4;                                         // 0x02F8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                               ImageBox5;                                         // 0x0300(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetSwitcher*                        StatusSwitcher;                                    // 0x0308(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_             OnPressCloseButton;                                // 0x0310(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	TArray<class FString>                         ViewFangIds;                                       // 0x0320(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	int32                                         AnimationTarget;                                   // 0x0330(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          AnimationLeft;                                     // 0x0334(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5E84[0x3];                                     // 0x0335(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class FString>                         NewFangIds;                                        // 0x0338(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                          NeedUpdate;                                        // 0x0348(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

public:
	void OnPressCloseButton__DelegateSignature();
	void ExecuteUbergraph_Fang_expedition_DetailHeader(int32 EntryPoint);
	void ImageAnimationFinish();
	void FangImageLoad(TSoftObjectPtr<class UTexture2D> Texture, int32 Param_Index);
	void BndEvt__Fang_expedition_DetailHeader_CmnClose01_K2Node_ComponentBoundEvent_0_OnClosed__DelegateSignature();
	void OnLoaded_9F74DC0840402151039A7F9243B7E826(class UObject* Loaded);
	void SetStay(int32 Category);
	void SetPlayData(struct FSBFang_expeditionPlayData& PlayData);
	void SetFangData(TArray<class FString>& UniqueIds, bool UseAnimation);
	void UpdateFangTexture(class UTexture2D* Texture, int32 Param_Index);
	void IconAnimationStop();
	void UpdateFangData();
	void SetCloseBtnVisible(bool Visible);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"Fang_expedition_DetailHeader_C">();
	}
	static class UFang_expedition_DetailHeader_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFang_expedition_DetailHeader_C>();
	}
};
static_assert(alignof(UFang_expedition_DetailHeader_C) == 0x000008, "Wrong alignment on UFang_expedition_DetailHeader_C");
static_assert(sizeof(UFang_expedition_DetailHeader_C) == 0x000350, "Wrong size on UFang_expedition_DetailHeader_C");
static_assert(offsetof(UFang_expedition_DetailHeader_C, UberGraphFrame) == 0x000278, "Member 'UFang_expedition_DetailHeader_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UFang_expedition_DetailHeader_C, AreaImage_Dgn) == 0x000280, "Member 'UFang_expedition_DetailHeader_C::AreaImage_Dgn' has a wrong offset!");
static_assert(offsetof(UFang_expedition_DetailHeader_C, AreaImage_Fld) == 0x000288, "Member 'UFang_expedition_DetailHeader_C::AreaImage_Fld' has a wrong offset!");
static_assert(offsetof(UFang_expedition_DetailHeader_C, AreaImage_Switcher) == 0x000290, "Member 'UFang_expedition_DetailHeader_C::AreaImage_Switcher' has a wrong offset!");
static_assert(offsetof(UFang_expedition_DetailHeader_C, AreaImage_Town) == 0x000298, "Member 'UFang_expedition_DetailHeader_C::AreaImage_Town' has a wrong offset!");
static_assert(offsetof(UFang_expedition_DetailHeader_C, CmnClose01) == 0x0002A0, "Member 'UFang_expedition_DetailHeader_C::CmnClose01' has a wrong offset!");
static_assert(offsetof(UFang_expedition_DetailHeader_C, FangHorizontalBox) == 0x0002A8, "Member 'UFang_expedition_DetailHeader_C::FangHorizontalBox' has a wrong offset!");
static_assert(offsetof(UFang_expedition_DetailHeader_C, FangImage1) == 0x0002B0, "Member 'UFang_expedition_DetailHeader_C::FangImage1' has a wrong offset!");
static_assert(offsetof(UFang_expedition_DetailHeader_C, FangImage2) == 0x0002B8, "Member 'UFang_expedition_DetailHeader_C::FangImage2' has a wrong offset!");
static_assert(offsetof(UFang_expedition_DetailHeader_C, FangImage3) == 0x0002C0, "Member 'UFang_expedition_DetailHeader_C::FangImage3' has a wrong offset!");
static_assert(offsetof(UFang_expedition_DetailHeader_C, FangImage4) == 0x0002C8, "Member 'UFang_expedition_DetailHeader_C::FangImage4' has a wrong offset!");
static_assert(offsetof(UFang_expedition_DetailHeader_C, FangImage5) == 0x0002D0, "Member 'UFang_expedition_DetailHeader_C::FangImage5' has a wrong offset!");
static_assert(offsetof(UFang_expedition_DetailHeader_C, FangImagePanel) == 0x0002D8, "Member 'UFang_expedition_DetailHeader_C::FangImagePanel' has a wrong offset!");
static_assert(offsetof(UFang_expedition_DetailHeader_C, ImageBox1) == 0x0002E0, "Member 'UFang_expedition_DetailHeader_C::ImageBox1' has a wrong offset!");
static_assert(offsetof(UFang_expedition_DetailHeader_C, ImageBox2) == 0x0002E8, "Member 'UFang_expedition_DetailHeader_C::ImageBox2' has a wrong offset!");
static_assert(offsetof(UFang_expedition_DetailHeader_C, ImageBox3) == 0x0002F0, "Member 'UFang_expedition_DetailHeader_C::ImageBox3' has a wrong offset!");
static_assert(offsetof(UFang_expedition_DetailHeader_C, ImageBox4) == 0x0002F8, "Member 'UFang_expedition_DetailHeader_C::ImageBox4' has a wrong offset!");
static_assert(offsetof(UFang_expedition_DetailHeader_C, ImageBox5) == 0x000300, "Member 'UFang_expedition_DetailHeader_C::ImageBox5' has a wrong offset!");
static_assert(offsetof(UFang_expedition_DetailHeader_C, StatusSwitcher) == 0x000308, "Member 'UFang_expedition_DetailHeader_C::StatusSwitcher' has a wrong offset!");
static_assert(offsetof(UFang_expedition_DetailHeader_C, OnPressCloseButton) == 0x000310, "Member 'UFang_expedition_DetailHeader_C::OnPressCloseButton' has a wrong offset!");
static_assert(offsetof(UFang_expedition_DetailHeader_C, ViewFangIds) == 0x000320, "Member 'UFang_expedition_DetailHeader_C::ViewFangIds' has a wrong offset!");
static_assert(offsetof(UFang_expedition_DetailHeader_C, AnimationTarget) == 0x000330, "Member 'UFang_expedition_DetailHeader_C::AnimationTarget' has a wrong offset!");
static_assert(offsetof(UFang_expedition_DetailHeader_C, AnimationLeft) == 0x000334, "Member 'UFang_expedition_DetailHeader_C::AnimationLeft' has a wrong offset!");
static_assert(offsetof(UFang_expedition_DetailHeader_C, NewFangIds) == 0x000338, "Member 'UFang_expedition_DetailHeader_C::NewFangIds' has a wrong offset!");
static_assert(offsetof(UFang_expedition_DetailHeader_C, NeedUpdate) == 0x000348, "Member 'UFang_expedition_DetailHeader_C::NeedUpdate' has a wrong offset!");

}

