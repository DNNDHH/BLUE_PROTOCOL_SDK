#pragma once

 

// Package: TextWindowDemo

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "SkyBlue_classes.hpp"
#include "UMG_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass TextWindowDemo.TextWindowDemo_C
// 0x0030 (0x02A8 - 0x0278)
class UTextWindowDemo_C final : public USBTextWindowBase
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0278(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       NextMarkLoop;                                      // 0x0280(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UImage*                                 ImgNextMark;                                       // 0x0288(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 ImgNextMarkPressed;                                // 0x0290(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                           NextMarkGroup;                                     // 0x0298(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBRichTextBlock*                       Text;                                              // 0x02A0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_TextWindowDemo(int32 EntryPoint);
	void SetNextMarkVisibility(const bool bInVisibility);
	void SetSpeaker(const class FName& InProfileId);
	void SetText(const class FText& InText);
	void Hide();
	void Show();
	void Construct();
	bool IsShow();
	void SetDisp(bool IsDisp);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"TextWindowDemo_C">();
	}
	static class UTextWindowDemo_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UTextWindowDemo_C>();
	}
};
static_assert(alignof(UTextWindowDemo_C) == 0x000008, "Wrong alignment on UTextWindowDemo_C");
static_assert(sizeof(UTextWindowDemo_C) == 0x0002A8, "Wrong size on UTextWindowDemo_C");
static_assert(offsetof(UTextWindowDemo_C, UberGraphFrame) == 0x000278, "Member 'UTextWindowDemo_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UTextWindowDemo_C, NextMarkLoop) == 0x000280, "Member 'UTextWindowDemo_C::NextMarkLoop' has a wrong offset!");
static_assert(offsetof(UTextWindowDemo_C, ImgNextMark) == 0x000288, "Member 'UTextWindowDemo_C::ImgNextMark' has a wrong offset!");
static_assert(offsetof(UTextWindowDemo_C, ImgNextMarkPressed) == 0x000290, "Member 'UTextWindowDemo_C::ImgNextMarkPressed' has a wrong offset!");
static_assert(offsetof(UTextWindowDemo_C, NextMarkGroup) == 0x000298, "Member 'UTextWindowDemo_C::NextMarkGroup' has a wrong offset!");
static_assert(offsetof(UTextWindowDemo_C, Text) == 0x0002A0, "Member 'UTextWindowDemo_C::Text' has a wrong offset!");

}

