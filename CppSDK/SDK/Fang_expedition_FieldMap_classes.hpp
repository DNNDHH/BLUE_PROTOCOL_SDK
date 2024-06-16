#pragma once

 

// Package: Fang_expedition_FieldMap

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "SkyBlue_structs.hpp"
#include "SkyBlue_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass Fang_expedition_FieldMap.Fang_expedition_FieldMap_C
// 0x00C0 (0x0380 - 0x02C0)
class UFang_expedition_FieldMap_C final : public USBTraverseCloudWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x02C0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UCanvasPanel*                           CloudCanvas;                                       // 0x02C8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 MapImage;                                          // 0x02D0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	struct FSBMapBGConfigTableRow                 BGConfigData;                                      // 0x02D8(0x0078)(Edit, BlueprintVisible, DisableEditOnInstance)
	class FString                                 NowMapId;                                          // 0x0350(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)
	class UUIBlocker_C*                           UIBlocker;                                         // 0x0360(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject*                                LoadTextureObject;                                 // 0x0368(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_             OnTextureLoadComplete;                             // 0x0370(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)

public:
	void OnTextureLoadComplete__DelegateSignature(bool IsSuccesed);
	void ExecuteUbergraph_Fang_expedition_FieldMap(int32 EntryPoint);
	void Destruct();
	void SetMapImage(const class FString& MapId);
	void OnLoaded_BCD4E12747AB56897A61B2A7D808B801(class UObject* Loaded);
	class UUserWidget* OnCreateCloudTraverse(class UCanvasPanel* Param_CloudCanvas, class FName Param_Name, const struct FVector2D& Position, const struct FVector2D& Size, class UTexture2D* Texture);
	void Update(const class FString& MapId, int32 Floor, const struct FVector2D& SizeScale);
	void GetBGConfigData(const class FString& MapId, bool* Find);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"Fang_expedition_FieldMap_C">();
	}
	static class UFang_expedition_FieldMap_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFang_expedition_FieldMap_C>();
	}
};
static_assert(alignof(UFang_expedition_FieldMap_C) == 0x000008, "Wrong alignment on UFang_expedition_FieldMap_C");
static_assert(sizeof(UFang_expedition_FieldMap_C) == 0x000380, "Wrong size on UFang_expedition_FieldMap_C");
static_assert(offsetof(UFang_expedition_FieldMap_C, UberGraphFrame) == 0x0002C0, "Member 'UFang_expedition_FieldMap_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UFang_expedition_FieldMap_C, CloudCanvas) == 0x0002C8, "Member 'UFang_expedition_FieldMap_C::CloudCanvas' has a wrong offset!");
static_assert(offsetof(UFang_expedition_FieldMap_C, MapImage) == 0x0002D0, "Member 'UFang_expedition_FieldMap_C::MapImage' has a wrong offset!");
static_assert(offsetof(UFang_expedition_FieldMap_C, BGConfigData) == 0x0002D8, "Member 'UFang_expedition_FieldMap_C::BGConfigData' has a wrong offset!");
static_assert(offsetof(UFang_expedition_FieldMap_C, NowMapId) == 0x000350, "Member 'UFang_expedition_FieldMap_C::NowMapId' has a wrong offset!");
static_assert(offsetof(UFang_expedition_FieldMap_C, UIBlocker) == 0x000360, "Member 'UFang_expedition_FieldMap_C::UIBlocker' has a wrong offset!");
static_assert(offsetof(UFang_expedition_FieldMap_C, LoadTextureObject) == 0x000368, "Member 'UFang_expedition_FieldMap_C::LoadTextureObject' has a wrong offset!");
static_assert(offsetof(UFang_expedition_FieldMap_C, OnTextureLoadComplete) == 0x000370, "Member 'UFang_expedition_FieldMap_C::OnTextureLoadComplete' has a wrong offset!");

}

