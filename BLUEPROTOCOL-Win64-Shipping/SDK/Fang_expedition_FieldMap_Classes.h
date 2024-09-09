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
	 * WidgetBlueprintGeneratedClass Fang_expedition_FieldMap.Fang_expedition_FieldMap_C
	 * Size -> 0x00C0 (FullSize[0x0380] - InheritedSize[0x02C0])
	 */
	class UFang_expedition_FieldMap_C : public USBTraverseCloudWidget
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x02C0(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UCanvasPanel*                                        CloudCanvas;                                             // 0x02C8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UImage*                                              MapImage;                                                // 0x02D0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		struct FSBMapBGConfigTableRow                              BGConfigData;                                            // 0x02D8(0x0078) Edit, BlueprintVisible, DisableEditOnInstance
		class FString                                              NowMapId;                                                // 0x0350(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash
		class UUIBlocker_C*                                        UIBlocker;                                               // 0x0360(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UObject*                                             LoadTextureObject;                                       // 0x0368(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class FScriptMulticastDelegate                             OnTextureLoadComplete;                                   // 0x0370(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable

	public:
		void GetBGConfigData(const class FString& MapId, bool* Find);
		void Update(const class FString& MapId, int32_t Floor, const struct FVector2D& SizeScale);
		class UUserWidget* OnCreateCloudTraverse(class UCanvasPanel* CloudCanvas, const class FName& Name, const struct FVector2D& Position, const struct FVector2D& Size, class UTexture2D* Texture);
		void OnLoaded_BCD4E12747AB56897A61B2A7D808B801(class UObject* Loaded);
		void SetMapImage(const class FString& MapId);
		void Destruct();
		void ExecuteUbergraph_Fang_expedition_FieldMap(int32_t EntryPoint);
		void OnTextureLoadComplete__DelegateSignature(bool IsSuccesed);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
