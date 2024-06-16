#pragma once

 

// Package: DemoSubTitle

#include "Basic.hpp"

#include "DemoSubTitleData_structs.hpp"
#include "Engine_structs.hpp"
#include "UMG_classes.hpp"
#include "DemoSubTitleAnimationType_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass DemoSubTitle.DemoSubTitle_C
// 0x00B0 (0x0328 - 0x0278)
class UDemoSubTitle_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0278(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       Chapter5_InOut;                                    // 0x0280(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       Chapter4_InOut;                                    // 0x0288(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       ToBeContinued_InOut;                               // 0x0290(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       Chapter3_InOut;                                    // 0x0298(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       Chapter2_InOut;                                    // 0x02A0(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       Chapter1_InOut;                                    // 0x02A8(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UBorder*                                Chapter1;                                          // 0x02B0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Chapter1_Title;                                    // 0x02B8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBorder*                                Chapter2;                                          // 0x02C0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Chapter2_Title;                                    // 0x02C8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBorder*                                Chapter3;                                          // 0x02D0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Chapter3_Title;                                    // 0x02D8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBorder*                                Chapter4;                                          // 0x02E0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBorder*                                Chapter5;                                          // 0x02E8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_Black;                                       // 0x02F0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBorder*                                ToBeContinued;                                     // 0x02F8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 ToBeContinued_Title;                               // 0x0300(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_             OnFinish;                                          // 0x0308(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	class FName                                   ID;                                                // 0x0318(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	struct FDemoSubTitleData                      SubTitleData;                                      // 0x0320(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void OnFinish__DelegateSignature();
	void ExecuteUbergraph_DemoSubTitle(int32 EntryPoint);
	void FailedFinish();
	void Finish();
	void OnAnimationFinished(const class UWidgetAnimation* Animation);
	void Construct();

	void GetAnimation(EDemoSubTitleAnimationType InAnimationType, class UWidgetAnimation** OutAnimation) const;

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"DemoSubTitle_C">();
	}
	static class UDemoSubTitle_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UDemoSubTitle_C>();
	}
};
static_assert(alignof(UDemoSubTitle_C) == 0x000008, "Wrong alignment on UDemoSubTitle_C");
static_assert(sizeof(UDemoSubTitle_C) == 0x000328, "Wrong size on UDemoSubTitle_C");
static_assert(offsetof(UDemoSubTitle_C, UberGraphFrame) == 0x000278, "Member 'UDemoSubTitle_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UDemoSubTitle_C, Chapter5_InOut) == 0x000280, "Member 'UDemoSubTitle_C::Chapter5_InOut' has a wrong offset!");
static_assert(offsetof(UDemoSubTitle_C, Chapter4_InOut) == 0x000288, "Member 'UDemoSubTitle_C::Chapter4_InOut' has a wrong offset!");
static_assert(offsetof(UDemoSubTitle_C, ToBeContinued_InOut) == 0x000290, "Member 'UDemoSubTitle_C::ToBeContinued_InOut' has a wrong offset!");
static_assert(offsetof(UDemoSubTitle_C, Chapter3_InOut) == 0x000298, "Member 'UDemoSubTitle_C::Chapter3_InOut' has a wrong offset!");
static_assert(offsetof(UDemoSubTitle_C, Chapter2_InOut) == 0x0002A0, "Member 'UDemoSubTitle_C::Chapter2_InOut' has a wrong offset!");
static_assert(offsetof(UDemoSubTitle_C, Chapter1_InOut) == 0x0002A8, "Member 'UDemoSubTitle_C::Chapter1_InOut' has a wrong offset!");
static_assert(offsetof(UDemoSubTitle_C, Chapter1) == 0x0002B0, "Member 'UDemoSubTitle_C::Chapter1' has a wrong offset!");
static_assert(offsetof(UDemoSubTitle_C, Chapter1_Title) == 0x0002B8, "Member 'UDemoSubTitle_C::Chapter1_Title' has a wrong offset!");
static_assert(offsetof(UDemoSubTitle_C, Chapter2) == 0x0002C0, "Member 'UDemoSubTitle_C::Chapter2' has a wrong offset!");
static_assert(offsetof(UDemoSubTitle_C, Chapter2_Title) == 0x0002C8, "Member 'UDemoSubTitle_C::Chapter2_Title' has a wrong offset!");
static_assert(offsetof(UDemoSubTitle_C, Chapter3) == 0x0002D0, "Member 'UDemoSubTitle_C::Chapter3' has a wrong offset!");
static_assert(offsetof(UDemoSubTitle_C, Chapter3_Title) == 0x0002D8, "Member 'UDemoSubTitle_C::Chapter3_Title' has a wrong offset!");
static_assert(offsetof(UDemoSubTitle_C, Chapter4) == 0x0002E0, "Member 'UDemoSubTitle_C::Chapter4' has a wrong offset!");
static_assert(offsetof(UDemoSubTitle_C, Chapter5) == 0x0002E8, "Member 'UDemoSubTitle_C::Chapter5' has a wrong offset!");
static_assert(offsetof(UDemoSubTitle_C, Image_Black) == 0x0002F0, "Member 'UDemoSubTitle_C::Image_Black' has a wrong offset!");
static_assert(offsetof(UDemoSubTitle_C, ToBeContinued) == 0x0002F8, "Member 'UDemoSubTitle_C::ToBeContinued' has a wrong offset!");
static_assert(offsetof(UDemoSubTitle_C, ToBeContinued_Title) == 0x000300, "Member 'UDemoSubTitle_C::ToBeContinued_Title' has a wrong offset!");
static_assert(offsetof(UDemoSubTitle_C, OnFinish) == 0x000308, "Member 'UDemoSubTitle_C::OnFinish' has a wrong offset!");
static_assert(offsetof(UDemoSubTitle_C, ID) == 0x000318, "Member 'UDemoSubTitle_C::ID' has a wrong offset!");
static_assert(offsetof(UDemoSubTitle_C, SubTitleData) == 0x000320, "Member 'UDemoSubTitle_C::SubTitleData' has a wrong offset!");

}

