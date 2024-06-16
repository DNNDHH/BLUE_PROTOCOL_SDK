#pragma once

 

// Package: PlaceGuideContent

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "SkyBlue_structs.hpp"
#include "UMG_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass PlaceGuideContent.PlaceGuideContent_C
// 0x0068 (0x02E0 - 0x0278)
class UPlaceGuideContent_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0278(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       Out;                                               // 0x0280(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       In;                                                // 0x0288(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UCanvasPanel*                           CanvasPanel_0;                                     // 0x0290(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_3;                                           // 0x0298(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 ImageLight;                                        // 0x02A0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 ImageLine1;                                        // 0x02A8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 ImageLine2;                                        // 0x02B0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             Label_PlaceName;                                   // 0x02B8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             Label_SubName;                                     // 0x02C0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_             OnPlayEnd;                                         // 0x02C8(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	bool                                          bAutoClose;                                        // 0x02D8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	ESBUIType                                     UiType;                                            // 0x02D9(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)

public:
	void OnPlayEnd__DelegateSignature();
	void ExecuteUbergraph_PlaceGuideContent(int32 EntryPoint);
	void Destruct();
	void OnChangeUIVisibleSetting(ESBUIType InUIType, bool bInVisibility, bool bInInstantly);
	void Hide();
	void OnAnimationFinished(const class UWidgetAnimation* Animation);
	void Show_ByText(const class FText& InPlaceName, const class FText& InSubName, bool bInAutoClose);
	void Construct();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"PlaceGuideContent_C">();
	}
	static class UPlaceGuideContent_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UPlaceGuideContent_C>();
	}
};
static_assert(alignof(UPlaceGuideContent_C) == 0x000008, "Wrong alignment on UPlaceGuideContent_C");
static_assert(sizeof(UPlaceGuideContent_C) == 0x0002E0, "Wrong size on UPlaceGuideContent_C");
static_assert(offsetof(UPlaceGuideContent_C, UberGraphFrame) == 0x000278, "Member 'UPlaceGuideContent_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UPlaceGuideContent_C, Out) == 0x000280, "Member 'UPlaceGuideContent_C::Out' has a wrong offset!");
static_assert(offsetof(UPlaceGuideContent_C, In) == 0x000288, "Member 'UPlaceGuideContent_C::In' has a wrong offset!");
static_assert(offsetof(UPlaceGuideContent_C, CanvasPanel_0) == 0x000290, "Member 'UPlaceGuideContent_C::CanvasPanel_0' has a wrong offset!");
static_assert(offsetof(UPlaceGuideContent_C, Image_3) == 0x000298, "Member 'UPlaceGuideContent_C::Image_3' has a wrong offset!");
static_assert(offsetof(UPlaceGuideContent_C, ImageLight) == 0x0002A0, "Member 'UPlaceGuideContent_C::ImageLight' has a wrong offset!");
static_assert(offsetof(UPlaceGuideContent_C, ImageLine1) == 0x0002A8, "Member 'UPlaceGuideContent_C::ImageLine1' has a wrong offset!");
static_assert(offsetof(UPlaceGuideContent_C, ImageLine2) == 0x0002B0, "Member 'UPlaceGuideContent_C::ImageLine2' has a wrong offset!");
static_assert(offsetof(UPlaceGuideContent_C, Label_PlaceName) == 0x0002B8, "Member 'UPlaceGuideContent_C::Label_PlaceName' has a wrong offset!");
static_assert(offsetof(UPlaceGuideContent_C, Label_SubName) == 0x0002C0, "Member 'UPlaceGuideContent_C::Label_SubName' has a wrong offset!");
static_assert(offsetof(UPlaceGuideContent_C, OnPlayEnd) == 0x0002C8, "Member 'UPlaceGuideContent_C::OnPlayEnd' has a wrong offset!");
static_assert(offsetof(UPlaceGuideContent_C, bAutoClose) == 0x0002D8, "Member 'UPlaceGuideContent_C::bAutoClose' has a wrong offset!");
static_assert(offsetof(UPlaceGuideContent_C, UiType) == 0x0002D9, "Member 'UPlaceGuideContent_C::UiType' has a wrong offset!");

}

