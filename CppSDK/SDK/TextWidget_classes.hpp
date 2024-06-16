#pragma once

 

// Package: TextWidget

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass TextWidget.TextWidget_C
// 0x0018 (0x0290 - 0x0278)
class UTextWidget_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0278(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UTextBlock*                             Text;                                              // 0x0280(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBTextTableAsset*                      TextTable;                                         // 0x0288(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)

public:
	void SetText(const class FString& Param_Text);
	void SetTextId(int32 InTextID);
	void ExecuteUbergraph_TextWidget(int32 EntryPoint);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"TextWidget_C">();
	}
	static class UTextWidget_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UTextWidget_C>();
	}
};
static_assert(alignof(UTextWidget_C) == 0x000008, "Wrong alignment on UTextWidget_C");
static_assert(sizeof(UTextWidget_C) == 0x000290, "Wrong size on UTextWidget_C");
static_assert(offsetof(UTextWidget_C, UberGraphFrame) == 0x000278, "Member 'UTextWidget_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UTextWidget_C, Text) == 0x000280, "Member 'UTextWidget_C::Text' has a wrong offset!");
static_assert(offsetof(UTextWidget_C, TextTable) == 0x000288, "Member 'UTextWidget_C::TextTable' has a wrong offset!");

}

