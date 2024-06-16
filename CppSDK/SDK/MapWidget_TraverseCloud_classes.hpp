#pragma once

 

// Package: MapWidget_TraverseCloud

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "SkyBlue_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass MapWidget_TraverseCloud.MapWidget_TraverseCloud_C
// 0x0008 (0x02C8 - 0x02C0)
class UMapWidget_TraverseCloud_C final : public USBTraverseCloudWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x02C0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)

public:
	void ExecuteUbergraph_MapWidget_TraverseCloud(int32 EntryPoint);
	void Update(const class FString& InMapId, int32 Floor, const struct FVector2D& InMapSizeScale);
	int32 GetZOrder();
	class UUserWidget* OnCreateDungeonTraverse(class UCanvasPanel* CloudCanvas, class FName Param_Name, const struct FVector2D& Position, const struct FVector2D& Size);
	class UUserWidget* OnCreateCloudTraverse(class UCanvasPanel* CloudCanvas, class FName Param_Name, const struct FVector2D& Position, const struct FVector2D& Size, class UTexture2D* Texture);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"MapWidget_TraverseCloud_C">();
	}
	static class UMapWidget_TraverseCloud_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMapWidget_TraverseCloud_C>();
	}
};
static_assert(alignof(UMapWidget_TraverseCloud_C) == 0x000008, "Wrong alignment on UMapWidget_TraverseCloud_C");
static_assert(sizeof(UMapWidget_TraverseCloud_C) == 0x0002C8, "Wrong size on UMapWidget_TraverseCloud_C");
static_assert(offsetof(UMapWidget_TraverseCloud_C, UberGraphFrame) == 0x0002C0, "Member 'UMapWidget_TraverseCloud_C::UberGraphFrame' has a wrong offset!");

}

