#pragma once

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
	 * WidgetBlueprintGeneratedClass MapWidget_TraverseCloud.MapWidget_TraverseCloud_C
	 * Size -> 0x0008 (FullSize[0x02C8] - InheritedSize[0x02C0])
	 */
	class UMapWidget_TraverseCloud_C : public USBTraverseCloudWidget
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x02C0(0x0008) ZeroConstructor, Transient, DuplicateTransient

	public:
		class UUserWidget* OnCreateCloudTraverse(class UCanvasPanel* CloudCanvas, const class FName& Name, const struct FVector2D& Position, const struct FVector2D& Size, class UTexture2D* Texture);
		class UUserWidget* OnCreateDungeonTraverse(class UCanvasPanel* CloudCanvas, const class FName& Name, const struct FVector2D& Position, const struct FVector2D& Size);
		int32_t GetZOrder();
		void Update(const class FString& InMapId, int32_t Floor, const struct FVector2D& InMapSizeScale);
		void ExecuteUbergraph_MapWidget_TraverseCloud(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
