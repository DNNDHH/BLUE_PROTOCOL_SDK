#pragma once

 

// Package: CharaCreateViewerTextBlock

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass CharaCreateViewerTextBlock.CharaCreateViewerTextBlock_C
// 0x0010 (0x0288 - 0x0278)
class UCharaCreateViewerTextBlock_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0278(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UTextBlock*                             Text;                                              // 0x0280(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_CharaCreateViewerTextBlock(int32 EntryPoint);
	void SetText(const class FText& InText);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"CharaCreateViewerTextBlock_C">();
	}
	static class UCharaCreateViewerTextBlock_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UCharaCreateViewerTextBlock_C>();
	}
};
static_assert(alignof(UCharaCreateViewerTextBlock_C) == 0x000008, "Wrong alignment on UCharaCreateViewerTextBlock_C");
static_assert(sizeof(UCharaCreateViewerTextBlock_C) == 0x000288, "Wrong size on UCharaCreateViewerTextBlock_C");
static_assert(offsetof(UCharaCreateViewerTextBlock_C, UberGraphFrame) == 0x000278, "Member 'UCharaCreateViewerTextBlock_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UCharaCreateViewerTextBlock_C, Text) == 0x000280, "Member 'UCharaCreateViewerTextBlock_C::Text' has a wrong offset!");

}

