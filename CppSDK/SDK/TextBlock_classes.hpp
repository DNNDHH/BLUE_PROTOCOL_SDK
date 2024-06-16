#pragma once

 

// Package: TextBlock

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass TextBlock.TextBlock_C
// 0x0010 (0x0288 - 0x0278)
class UTextBlock_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0278(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UTextBlock*                             TextBlock_1;                                       // 0x0280(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_TextBlock(int32 EntryPoint);
	void SetText(const class FString& Text);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"TextBlock_C">();
	}
	static class UTextBlock_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UTextBlock_C>();
	}
};
static_assert(alignof(UTextBlock_C) == 0x000008, "Wrong alignment on UTextBlock_C");
static_assert(sizeof(UTextBlock_C) == 0x000288, "Wrong size on UTextBlock_C");
static_assert(offsetof(UTextBlock_C, UberGraphFrame) == 0x000278, "Member 'UTextBlock_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UTextBlock_C, TextBlock_1) == 0x000280, "Member 'UTextBlock_C::TextBlock_1' has a wrong offset!");

}

