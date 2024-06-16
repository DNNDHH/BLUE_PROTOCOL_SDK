#pragma once

 

// Package: FLIB_Chat

#include "Basic.hpp"

#include "Engine_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass FLIB_Chat.FLIB_Chat_C
// 0x0000 (0x0028 - 0x0028)
class UFLIB_Chat_C final : public UBlueprintFunctionLibrary
{
public:
	static bool IsTalkModeContinue(class UObject* __WorldContext);
	static void OnChatHudDragOver(const struct FGeometry& MyGeometry, const struct FPointerEvent& PointerEvent, class UDragDropOperation* Operation, class UObject* __WorldContext);
	static void OnChatHudDrop(const struct FGeometry& MyGeometry, const struct FPointerEvent& PointerEvent, class UDragDropOperation* Operation, class UObject* __WorldContext);
	static void CreateClippingAnchors(class UObject* __WorldContext, struct FAnchors* Anchors);
	static bool IsPhotoMode(class UObject* __WorldContext);
	static bool IsNotPhotoMode(class UObject* __WorldContext);
	static void IsOffScreen(class UUserWidget* InWidgetRef, const struct FGeometry& InMyGeometry, const struct FPointerEvent& InPointerEvent, const struct FVector2D& InDragStartPos, class UObject* __WorldContext, bool* Param_IsOffScreen);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"FLIB_Chat_C">();
	}
	static class UFLIB_Chat_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFLIB_Chat_C>();
	}
};
static_assert(alignof(UFLIB_Chat_C) == 0x000008, "Wrong alignment on UFLIB_Chat_C");
static_assert(sizeof(UFLIB_Chat_C) == 0x000028, "Wrong size on UFLIB_Chat_C");

}

