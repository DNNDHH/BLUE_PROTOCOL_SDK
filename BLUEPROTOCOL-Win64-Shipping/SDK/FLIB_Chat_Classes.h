﻿#pragma once

/**
 * Name: BLUEPROTOCOL-Win64-Shipping
 * Version: 1.6.0
 */

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
	// --------------------------------------------------
	// # Classes
	// --------------------------------------------------
	/**
	 * BlueprintGeneratedClass FLIB_Chat.FLIB_Chat_C
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UFLIB_Chat_C : public UBlueprintFunctionLibrary
	{
	public:
		void IsOffScreen(class UUserWidget* InWidgetRef, const struct FGeometry& InMyGeometry, const struct FPointerEvent& InPointerEvent, const struct FVector2D& InDragStartPos, class UObject* __WorldContext, bool* IsOffScreen);
		bool IsNotPhotoMode(class UObject* __WorldContext);
		bool IsPhotoMode(class UObject* __WorldContext);
		void CreateClippingAnchors(class UObject* __WorldContext, struct FAnchors* Anchors);
		void OnChatHudDrop(const struct FGeometry& MyGeometry, const struct FPointerEvent& PointerEvent, class UDragDropOperation* Operation, class UObject* __WorldContext);
		void OnChatHudDragOver(const struct FGeometry& MyGeometry, const struct FPointerEvent& PointerEvent, class UDragDropOperation* Operation, class UObject* __WorldContext);
		bool IsTalkModeContinue(class UObject* __WorldContext);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif