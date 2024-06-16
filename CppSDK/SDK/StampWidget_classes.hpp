#pragma once

 

// Package: StampWidget

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass StampWidget.StampWidget_C
// 0x0018 (0x0290 - 0x0278)
class UStampWidget_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0278(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UImage*                                 Image_0;                                           // 0x0280(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                               SizeBox_0;                                         // 0x0288(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_StampWidget(int32 EntryPoint);
	void SetStamp(int32 StampId, float StampSize);
	void OnLoaded_C6C1A4DA493A48B31FADE282B44EF873(class UObject* Loaded);
	void PlayStampVoice(int32 StampId, class ACharacter* AttachCharacter);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"StampWidget_C">();
	}
	static class UStampWidget_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UStampWidget_C>();
	}
};
static_assert(alignof(UStampWidget_C) == 0x000008, "Wrong alignment on UStampWidget_C");
static_assert(sizeof(UStampWidget_C) == 0x000290, "Wrong size on UStampWidget_C");
static_assert(offsetof(UStampWidget_C, UberGraphFrame) == 0x000278, "Member 'UStampWidget_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UStampWidget_C, Image_0) == 0x000280, "Member 'UStampWidget_C::Image_0' has a wrong offset!");
static_assert(offsetof(UStampWidget_C, SizeBox_0) == 0x000288, "Member 'UStampWidget_C::SizeBox_0' has a wrong offset!");

}

