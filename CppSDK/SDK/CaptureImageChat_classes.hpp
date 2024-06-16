#pragma once

 

// Package: CaptureImageChat

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass CaptureImageChat.CaptureImageChat_C
// 0x0018 (0x0290 - 0x0278)
class UCaptureImageChat_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0278(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UImage*                                 CaptueImage;                                       // 0x0280(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*               CaputureImageMat;                                  // 0x0288(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_CaptureImageChat(int32 EntryPoint);
	void Construct();
	void SetCaptureImage(class UTexture2DDynamic* CaptureImage);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"CaptureImageChat_C">();
	}
	static class UCaptureImageChat_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UCaptureImageChat_C>();
	}
};
static_assert(alignof(UCaptureImageChat_C) == 0x000008, "Wrong alignment on UCaptureImageChat_C");
static_assert(sizeof(UCaptureImageChat_C) == 0x000290, "Wrong size on UCaptureImageChat_C");
static_assert(offsetof(UCaptureImageChat_C, UberGraphFrame) == 0x000278, "Member 'UCaptureImageChat_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UCaptureImageChat_C, CaptueImage) == 0x000280, "Member 'UCaptureImageChat_C::CaptueImage' has a wrong offset!");
static_assert(offsetof(UCaptureImageChat_C, CaputureImageMat) == 0x000288, "Member 'UCaptureImageChat_C::CaputureImageMat' has a wrong offset!");

}

