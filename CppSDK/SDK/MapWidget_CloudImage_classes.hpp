#pragma once

 

// Package: MapWidget_CloudImage

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass MapWidget_CloudImage.MapWidget_CloudImage_C
// 0x0020 (0x0298 - 0x0278)
class UMapWidget_CloudImage_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0278(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UImage*                                 CloudImage;                                        // 0x0280(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             DebugText;                                         // 0x0288(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class FName                                   Name_MapWidget_CloudImage_C;                       // 0x0290(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_MapWidget_CloudImage(int32 EntryPoint);
	void Construct();
	void Setup(const struct FAnchors& InAnchors, const struct FVector2D& InPosition, const struct FVector2D& InSize, class UTexture2D* Texture);
	void SetName(class FName Param_Name);
	void SetVisibleDebugText();

	void GetName(class FName* Param_Name) const;

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"MapWidget_CloudImage_C">();
	}
	static class UMapWidget_CloudImage_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMapWidget_CloudImage_C>();
	}
};
static_assert(alignof(UMapWidget_CloudImage_C) == 0x000008, "Wrong alignment on UMapWidget_CloudImage_C");
static_assert(sizeof(UMapWidget_CloudImage_C) == 0x000298, "Wrong size on UMapWidget_CloudImage_C");
static_assert(offsetof(UMapWidget_CloudImage_C, UberGraphFrame) == 0x000278, "Member 'UMapWidget_CloudImage_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UMapWidget_CloudImage_C, CloudImage) == 0x000280, "Member 'UMapWidget_CloudImage_C::CloudImage' has a wrong offset!");
static_assert(offsetof(UMapWidget_CloudImage_C, DebugText) == 0x000288, "Member 'UMapWidget_CloudImage_C::DebugText' has a wrong offset!");
static_assert(offsetof(UMapWidget_CloudImage_C, Name_MapWidget_CloudImage_C) == 0x000290, "Member 'UMapWidget_CloudImage_C::Name_MapWidget_CloudImage_C' has a wrong offset!");

}

