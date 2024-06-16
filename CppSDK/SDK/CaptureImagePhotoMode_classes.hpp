#pragma once

 

// Package: CaptureImagePhotoMode

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass CaptureImagePhotoMode.CaptureImagePhotoMode_C
// 0x0028 (0x02A0 - 0x0278)
class UCaptureImagePhotoMode_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0278(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UImage*                                 CaptueImage;                                       // 0x0280(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*               CaputureImageMat;                                  // 0x0288(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                 CharacterId;                                       // 0x0290(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_CaptureImagePhotoMode(int32 EntryPoint);
	void SetCaptureImageByCharacterId(const class FString& Param_CharacterId);
	void Construct();
	void SetCaptureImage(class UTexture2DDynamic* CaptureImage);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"CaptureImagePhotoMode_C">();
	}
	static class UCaptureImagePhotoMode_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UCaptureImagePhotoMode_C>();
	}
};
static_assert(alignof(UCaptureImagePhotoMode_C) == 0x000008, "Wrong alignment on UCaptureImagePhotoMode_C");
static_assert(sizeof(UCaptureImagePhotoMode_C) == 0x0002A0, "Wrong size on UCaptureImagePhotoMode_C");
static_assert(offsetof(UCaptureImagePhotoMode_C, UberGraphFrame) == 0x000278, "Member 'UCaptureImagePhotoMode_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UCaptureImagePhotoMode_C, CaptueImage) == 0x000280, "Member 'UCaptureImagePhotoMode_C::CaptueImage' has a wrong offset!");
static_assert(offsetof(UCaptureImagePhotoMode_C, CaputureImageMat) == 0x000288, "Member 'UCaptureImagePhotoMode_C::CaputureImageMat' has a wrong offset!");
static_assert(offsetof(UCaptureImagePhotoMode_C, CharacterId) == 0x000290, "Member 'UCaptureImagePhotoMode_C::CharacterId' has a wrong offset!");

}

