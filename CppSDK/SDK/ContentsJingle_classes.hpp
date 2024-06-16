#pragma once

 

// Package: ContentsJingle

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass ContentsJingle.ContentsJingle_C
// 0x0060 (0x02D8 - 0x0278)
class UContentsJingle_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0278(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       PlayOut;                                           // 0x0280(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       PlayIn;                                            // 0x0288(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UImage*                                 BgImage;                                           // 0x0290(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBRuntimeTextBlock*                    Clear;                                             // 0x0298(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 ImageLight;                                        // 0x02A0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 ImageLine1;                                        // 0x02A8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 ImageLine2;                                        // 0x02B0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                           LineImages;                                        // 0x02B8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                           Root;                                              // 0x02C0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetAnimation*                       CurrentAnim;                                       // 0x02C8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bPlayAnim;                                         // 0x02D0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_74E6[0x3];                                     // 0x02D1(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         WaitTime;                                          // 0x02D4(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_ContentsJingle(int32 EntryPoint);
	void Construct();

	void IsAnyAnimationPlaying_(bool* bIsPlaying) const;

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"ContentsJingle_C">();
	}
	static class UContentsJingle_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UContentsJingle_C>();
	}
};
static_assert(alignof(UContentsJingle_C) == 0x000008, "Wrong alignment on UContentsJingle_C");
static_assert(sizeof(UContentsJingle_C) == 0x0002D8, "Wrong size on UContentsJingle_C");
static_assert(offsetof(UContentsJingle_C, UberGraphFrame) == 0x000278, "Member 'UContentsJingle_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UContentsJingle_C, PlayOut) == 0x000280, "Member 'UContentsJingle_C::PlayOut' has a wrong offset!");
static_assert(offsetof(UContentsJingle_C, PlayIn) == 0x000288, "Member 'UContentsJingle_C::PlayIn' has a wrong offset!");
static_assert(offsetof(UContentsJingle_C, BgImage) == 0x000290, "Member 'UContentsJingle_C::BgImage' has a wrong offset!");
static_assert(offsetof(UContentsJingle_C, Clear) == 0x000298, "Member 'UContentsJingle_C::Clear' has a wrong offset!");
static_assert(offsetof(UContentsJingle_C, ImageLight) == 0x0002A0, "Member 'UContentsJingle_C::ImageLight' has a wrong offset!");
static_assert(offsetof(UContentsJingle_C, ImageLine1) == 0x0002A8, "Member 'UContentsJingle_C::ImageLine1' has a wrong offset!");
static_assert(offsetof(UContentsJingle_C, ImageLine2) == 0x0002B0, "Member 'UContentsJingle_C::ImageLine2' has a wrong offset!");
static_assert(offsetof(UContentsJingle_C, LineImages) == 0x0002B8, "Member 'UContentsJingle_C::LineImages' has a wrong offset!");
static_assert(offsetof(UContentsJingle_C, Root) == 0x0002C0, "Member 'UContentsJingle_C::Root' has a wrong offset!");
static_assert(offsetof(UContentsJingle_C, CurrentAnim) == 0x0002C8, "Member 'UContentsJingle_C::CurrentAnim' has a wrong offset!");
static_assert(offsetof(UContentsJingle_C, bPlayAnim) == 0x0002D0, "Member 'UContentsJingle_C::bPlayAnim' has a wrong offset!");
static_assert(offsetof(UContentsJingle_C, WaitTime) == 0x0002D4, "Member 'UContentsJingle_C::WaitTime' has a wrong offset!");

}

