#pragma once

 

// Package: ClassChangedJingle

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_classes.hpp"
#include "SkyBlue_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass ClassChangedJingle.ClassChangedJingle_C
// 0x0070 (0x02E8 - 0x0278)
class UClassChangedJingle_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0278(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       Changed;                                           // 0x0280(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UClassIconL_C*                          BeforeClass;                                       // 0x0288(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 BgBlack;                                           // 0x0290(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 BgImage;                                           // 0x0298(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UClassIconL_C*                          ChangedClass;                                      // 0x02A0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_102;                                         // 0x02A8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_144;                                         // 0x02B0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 ImageLight;                                        // 0x02B8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 ImageLine1;                                        // 0x02C0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 ImageLine2;                                        // 0x02C8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBRuntimeTextBlock*                    Quest;                                             // 0x02D0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_             OnPlayedAnim;                                      // 0x02D8(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)

public:
	void OnPlayedAnim__DelegateSignature();
	void ExecuteUbergraph_ClassChangedJingle(int32 EntryPoint);
	void ForceStopAnim();
	void PlayAnim(ESBClassType InClassType);
	void WidgetAnimationEvt_Changed_K2Node_WidgetAnimationEvent_0();
	void SetBeforeClass(ESBClassType InClassType);
	void Construct();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"ClassChangedJingle_C">();
	}
	static class UClassChangedJingle_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UClassChangedJingle_C>();
	}
};
static_assert(alignof(UClassChangedJingle_C) == 0x000008, "Wrong alignment on UClassChangedJingle_C");
static_assert(sizeof(UClassChangedJingle_C) == 0x0002E8, "Wrong size on UClassChangedJingle_C");
static_assert(offsetof(UClassChangedJingle_C, UberGraphFrame) == 0x000278, "Member 'UClassChangedJingle_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UClassChangedJingle_C, Changed) == 0x000280, "Member 'UClassChangedJingle_C::Changed' has a wrong offset!");
static_assert(offsetof(UClassChangedJingle_C, BeforeClass) == 0x000288, "Member 'UClassChangedJingle_C::BeforeClass' has a wrong offset!");
static_assert(offsetof(UClassChangedJingle_C, BgBlack) == 0x000290, "Member 'UClassChangedJingle_C::BgBlack' has a wrong offset!");
static_assert(offsetof(UClassChangedJingle_C, BgImage) == 0x000298, "Member 'UClassChangedJingle_C::BgImage' has a wrong offset!");
static_assert(offsetof(UClassChangedJingle_C, ChangedClass) == 0x0002A0, "Member 'UClassChangedJingle_C::ChangedClass' has a wrong offset!");
static_assert(offsetof(UClassChangedJingle_C, Image_102) == 0x0002A8, "Member 'UClassChangedJingle_C::Image_102' has a wrong offset!");
static_assert(offsetof(UClassChangedJingle_C, Image_144) == 0x0002B0, "Member 'UClassChangedJingle_C::Image_144' has a wrong offset!");
static_assert(offsetof(UClassChangedJingle_C, ImageLight) == 0x0002B8, "Member 'UClassChangedJingle_C::ImageLight' has a wrong offset!");
static_assert(offsetof(UClassChangedJingle_C, ImageLine1) == 0x0002C0, "Member 'UClassChangedJingle_C::ImageLine1' has a wrong offset!");
static_assert(offsetof(UClassChangedJingle_C, ImageLine2) == 0x0002C8, "Member 'UClassChangedJingle_C::ImageLine2' has a wrong offset!");
static_assert(offsetof(UClassChangedJingle_C, Quest) == 0x0002D0, "Member 'UClassChangedJingle_C::Quest' has a wrong offset!");
static_assert(offsetof(UClassChangedJingle_C, OnPlayedAnim) == 0x0002D8, "Member 'UClassChangedJingle_C::OnPlayedAnim' has a wrong offset!");

}

