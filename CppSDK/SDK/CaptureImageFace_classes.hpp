#pragma once

 

// Package: CaptureImageFace

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass CaptureImageFace.CaptureImageFace_C
// 0x0018 (0x0290 - 0x0278)
class UCaptureImageFace_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0278(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UImage*                                 CaptueImage;                                       // 0x0280(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*               CaputureImageMat;                                  // 0x0288(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_CaptureImageFace(int32 EntryPoint);
	void Construct();
	void SetCaptureImage(class UTexture2DDynamic* CaptureImage);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"CaptureImageFace_C">();
	}
	static class UCaptureImageFace_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UCaptureImageFace_C>();
	}
};
static_assert(alignof(UCaptureImageFace_C) == 0x000008, "Wrong alignment on UCaptureImageFace_C");
static_assert(sizeof(UCaptureImageFace_C) == 0x000290, "Wrong size on UCaptureImageFace_C");
static_assert(offsetof(UCaptureImageFace_C, UberGraphFrame) == 0x000278, "Member 'UCaptureImageFace_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UCaptureImageFace_C, CaptueImage) == 0x000280, "Member 'UCaptureImageFace_C::CaptueImage' has a wrong offset!");
static_assert(offsetof(UCaptureImageFace_C, CaputureImageMat) == 0x000288, "Member 'UCaptureImageFace_C::CaputureImageMat' has a wrong offset!");

}

