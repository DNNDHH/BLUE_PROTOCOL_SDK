#pragma once

 

// Package: Fang_expedition_FieldMap

#include "Basic.hpp"

#include "Fang_expedition_FieldMap_classes.hpp"
#include "Fang_expedition_FieldMap_parameters.hpp"


namespace SDK
{

// Function Fang_expedition_FieldMap.Fang_expedition_FieldMap_C.OnTextureLoadComplete__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    IsSuccesed                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UFang_expedition_FieldMap_C::OnTextureLoadComplete__DelegateSignature(bool IsSuccesed)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Fang_expedition_FieldMap_C", "OnTextureLoadComplete__DelegateSignature");

	Params::Fang_expedition_FieldMap_C_OnTextureLoadComplete__DelegateSignature Parms{};

	Parms.IsSuccesed = IsSuccesed;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Fang_expedition_FieldMap.Fang_expedition_FieldMap_C.ExecuteUbergraph_Fang_expedition_FieldMap
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UFang_expedition_FieldMap_C::ExecuteUbergraph_Fang_expedition_FieldMap(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Fang_expedition_FieldMap_C", "ExecuteUbergraph_Fang_expedition_FieldMap");

	Params::Fang_expedition_FieldMap_C_ExecuteUbergraph_Fang_expedition_FieldMap Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Fang_expedition_FieldMap.Fang_expedition_FieldMap_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UFang_expedition_FieldMap_C::Destruct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Fang_expedition_FieldMap_C", "Destruct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Fang_expedition_FieldMap.Fang_expedition_FieldMap_C.SetMapImage
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                           MapId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void UFang_expedition_FieldMap_C::SetMapImage(const class FString& MapId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Fang_expedition_FieldMap_C", "SetMapImage");

	Params::Fang_expedition_FieldMap_C_SetMapImage Parms{};

	Parms.MapId = std::move(MapId);

	UObject::ProcessEvent(Func, &Parms);
}


// Function Fang_expedition_FieldMap.Fang_expedition_FieldMap_C.OnLoaded_BCD4E12747AB56897A61B2A7D808B801
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                          Loaded                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UFang_expedition_FieldMap_C::OnLoaded_BCD4E12747AB56897A61B2A7D808B801(class UObject* Loaded)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Fang_expedition_FieldMap_C", "OnLoaded_BCD4E12747AB56897A61B2A7D808B801");

	Params::Fang_expedition_FieldMap_C_OnLoaded_BCD4E12747AB56897A61B2A7D808B801 Parms{};

	Parms.Loaded = Loaded;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Fang_expedition_FieldMap.Fang_expedition_FieldMap_C.OnCreateCloudTraverse
// (Event, Protected, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UCanvasPanel*                     Param_CloudCanvas                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                             Param_Name                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                        Position                                               (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                        Size                                                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTexture2D*                       Texture                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUserWidget*                      ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

class UUserWidget* UFang_expedition_FieldMap_C::OnCreateCloudTraverse(class UCanvasPanel* Param_CloudCanvas, class FName Param_Name, const struct FVector2D& Position, const struct FVector2D& Size, class UTexture2D* Texture)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Fang_expedition_FieldMap_C", "OnCreateCloudTraverse");

	Params::Fang_expedition_FieldMap_C_OnCreateCloudTraverse Parms{};

	Parms.Param_CloudCanvas = Param_CloudCanvas;
	Parms.Param_Name = Param_Name;
	Parms.Position = std::move(Position);
	Parms.Size = std::move(Size);
	Parms.Texture = Texture;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function Fang_expedition_FieldMap.Fang_expedition_FieldMap_C.Update
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                           MapId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// int32                                   Floor                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                        SizeScale                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UFang_expedition_FieldMap_C::Update(const class FString& MapId, int32 Floor, const struct FVector2D& SizeScale)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Fang_expedition_FieldMap_C", "Update");

	Params::Fang_expedition_FieldMap_C_Update Parms{};

	Parms.MapId = std::move(MapId);
	Parms.Floor = Floor;
	Parms.SizeScale = std::move(SizeScale);

	UObject::ProcessEvent(Func, &Parms);
}


// Function Fang_expedition_FieldMap.Fang_expedition_FieldMap_C.GetBGConfigData
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                           MapId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// bool                                    Find                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UFang_expedition_FieldMap_C::GetBGConfigData(const class FString& MapId, bool* Find)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Fang_expedition_FieldMap_C", "GetBGConfigData");

	Params::Fang_expedition_FieldMap_C_GetBGConfigData Parms{};

	Parms.MapId = std::move(MapId);

	UObject::ProcessEvent(Func, &Parms);

	if (Find != nullptr)
		*Find = Parms.Find;
}

}

