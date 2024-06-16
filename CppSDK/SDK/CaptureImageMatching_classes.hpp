#pragma once

 

// Package: CaptureImageMatching

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass CaptureImageMatching.CaptureImageMatching_C
// 0x0018 (0x0290 - 0x0278)
class UCaptureImageMatching_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0278(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UImage*                                 CaptueImage;                                       // 0x0280(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*               CaputureImageMat;                                  // 0x0288(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_CaptureImageMatching(int32 EntryPoint);
	void Construct();
	void SetCaptureImage(class UTexture2DDynamic* CaptureImage);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"CaptureImageMatching_C">();
	}
	static class UCaptureImageMatching_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UCaptureImageMatching_C>();
	}
};
static_assert(alignof(UCaptureImageMatching_C) == 0x000008, "Wrong alignment on UCaptureImageMatching_C");
static_assert(sizeof(UCaptureImageMatching_C) == 0x000290, "Wrong size on UCaptureImageMatching_C");
static_assert(offsetof(UCaptureImageMatching_C, UberGraphFrame) == 0x000278, "Member 'UCaptureImageMatching_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UCaptureImageMatching_C, CaptueImage) == 0x000280, "Member 'UCaptureImageMatching_C::CaptueImage' has a wrong offset!");
static_assert(offsetof(UCaptureImageMatching_C, CaputureImageMat) == 0x000288, "Member 'UCaptureImageMatching_C::CaputureImageMat' has a wrong offset!");

}

