#pragma once

 

// Package: LevelSequence

#include "Basic.hpp"

#include "MovieScene_structs.hpp"
#include "CoreUObject_structs.hpp"


namespace SDK::Params
{

// Function LevelSequence.LevelSequencePlayer.CreateLevelSequencePlayer
// 0x0038 (0x0038 - 0x0000)
struct LevelSequencePlayer_CreateLevelSequencePlayer final
{
public:
	class UObject*                                WorldContextObject;                                // 0x0000(0x0008)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class ULevelSequence*                         LevelSequence;                                     // 0x0008(0x0008)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FMovieSceneSequencePlaybackSettings    Settings;                                          // 0x0010(0x0014)(Parm, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                         Pad_18FB[0x4];                                     // 0x0024(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class ALevelSequenceActor*                    OutActor;                                          // 0x0028(0x0008)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class ULevelSequencePlayer*                   ReturnValue;                                       // 0x0030(0x0008)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(LevelSequencePlayer_CreateLevelSequencePlayer) == 0x000008, "Wrong alignment on LevelSequencePlayer_CreateLevelSequencePlayer");
static_assert(sizeof(LevelSequencePlayer_CreateLevelSequencePlayer) == 0x000038, "Wrong size on LevelSequencePlayer_CreateLevelSequencePlayer");
static_assert(offsetof(LevelSequencePlayer_CreateLevelSequencePlayer, WorldContextObject) == 0x000000, "Member 'LevelSequencePlayer_CreateLevelSequencePlayer::WorldContextObject' has a wrong offset!");
static_assert(offsetof(LevelSequencePlayer_CreateLevelSequencePlayer, LevelSequence) == 0x000008, "Member 'LevelSequencePlayer_CreateLevelSequencePlayer::LevelSequence' has a wrong offset!");
static_assert(offsetof(LevelSequencePlayer_CreateLevelSequencePlayer, Settings) == 0x000010, "Member 'LevelSequencePlayer_CreateLevelSequencePlayer::Settings' has a wrong offset!");
static_assert(offsetof(LevelSequencePlayer_CreateLevelSequencePlayer, OutActor) == 0x000028, "Member 'LevelSequencePlayer_CreateLevelSequencePlayer::OutActor' has a wrong offset!");
static_assert(offsetof(LevelSequencePlayer_CreateLevelSequencePlayer, ReturnValue) == 0x000030, "Member 'LevelSequencePlayer_CreateLevelSequencePlayer::ReturnValue' has a wrong offset!");

// Function LevelSequence.LevelSequencePlayer.GetActiveCameraComponent
// 0x0008 (0x0008 - 0x0000)
struct LevelSequencePlayer_GetActiveCameraComponent final
{
public:
	class UCameraComponent*                       ReturnValue;                                       // 0x0000(0x0008)(ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(LevelSequencePlayer_GetActiveCameraComponent) == 0x000008, "Wrong alignment on LevelSequencePlayer_GetActiveCameraComponent");
static_assert(sizeof(LevelSequencePlayer_GetActiveCameraComponent) == 0x000008, "Wrong size on LevelSequencePlayer_GetActiveCameraComponent");
static_assert(offsetof(LevelSequencePlayer_GetActiveCameraComponent, ReturnValue) == 0x000000, "Member 'LevelSequencePlayer_GetActiveCameraComponent::ReturnValue' has a wrong offset!");

// Function LevelSequence.LevelSequence.CopyMetaData
// 0x0010 (0x0010 - 0x0000)
struct LevelSequence_CopyMetaData final
{
public:
	class UObject*                                InMetaData;                                        // 0x0000(0x0008)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UObject*                                ReturnValue;                                       // 0x0008(0x0008)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(LevelSequence_CopyMetaData) == 0x000008, "Wrong alignment on LevelSequence_CopyMetaData");
static_assert(sizeof(LevelSequence_CopyMetaData) == 0x000010, "Wrong size on LevelSequence_CopyMetaData");
static_assert(offsetof(LevelSequence_CopyMetaData, InMetaData) == 0x000000, "Member 'LevelSequence_CopyMetaData::InMetaData' has a wrong offset!");
static_assert(offsetof(LevelSequence_CopyMetaData, ReturnValue) == 0x000008, "Member 'LevelSequence_CopyMetaData::ReturnValue' has a wrong offset!");

// Function LevelSequence.LevelSequence.FindOrAddMetaDataByClass
// 0x0010 (0x0010 - 0x0000)
struct LevelSequence_FindOrAddMetaDataByClass final
{
public:
	TSubclassOf<class UObject>                    InClass;                                           // 0x0000(0x0008)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UObject*                                ReturnValue;                                       // 0x0008(0x0008)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(LevelSequence_FindOrAddMetaDataByClass) == 0x000008, "Wrong alignment on LevelSequence_FindOrAddMetaDataByClass");
static_assert(sizeof(LevelSequence_FindOrAddMetaDataByClass) == 0x000010, "Wrong size on LevelSequence_FindOrAddMetaDataByClass");
static_assert(offsetof(LevelSequence_FindOrAddMetaDataByClass, InClass) == 0x000000, "Member 'LevelSequence_FindOrAddMetaDataByClass::InClass' has a wrong offset!");
static_assert(offsetof(LevelSequence_FindOrAddMetaDataByClass, ReturnValue) == 0x000008, "Member 'LevelSequence_FindOrAddMetaDataByClass::ReturnValue' has a wrong offset!");

// Function LevelSequence.LevelSequence.RemoveMetaDataByClass
// 0x0008 (0x0008 - 0x0000)
struct LevelSequence_RemoveMetaDataByClass final
{
public:
	TSubclassOf<class UObject>                    InClass;                                           // 0x0000(0x0008)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(LevelSequence_RemoveMetaDataByClass) == 0x000008, "Wrong alignment on LevelSequence_RemoveMetaDataByClass");
static_assert(sizeof(LevelSequence_RemoveMetaDataByClass) == 0x000008, "Wrong size on LevelSequence_RemoveMetaDataByClass");
static_assert(offsetof(LevelSequence_RemoveMetaDataByClass, InClass) == 0x000000, "Member 'LevelSequence_RemoveMetaDataByClass::InClass' has a wrong offset!");

// Function LevelSequence.LevelSequence.FindMetaDataByClass
// 0x0010 (0x0010 - 0x0000)
struct LevelSequence_FindMetaDataByClass final
{
public:
	TSubclassOf<class UObject>                    InClass;                                           // 0x0000(0x0008)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UObject*                                ReturnValue;                                       // 0x0008(0x0008)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(LevelSequence_FindMetaDataByClass) == 0x000008, "Wrong alignment on LevelSequence_FindMetaDataByClass");
static_assert(sizeof(LevelSequence_FindMetaDataByClass) == 0x000010, "Wrong size on LevelSequence_FindMetaDataByClass");
static_assert(offsetof(LevelSequence_FindMetaDataByClass, InClass) == 0x000000, "Member 'LevelSequence_FindMetaDataByClass::InClass' has a wrong offset!");
static_assert(offsetof(LevelSequence_FindMetaDataByClass, ReturnValue) == 0x000008, "Member 'LevelSequence_FindMetaDataByClass::ReturnValue' has a wrong offset!");

// Function LevelSequence.LevelSequenceActor.AddBinding
// 0x0028 (0x0028 - 0x0000)
struct LevelSequenceActor_AddBinding final
{
public:
	struct FMovieSceneObjectBindingID             Binding;                                           // 0x0000(0x0018)(Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                 Actor;                                             // 0x0018(0x0008)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bAllowBindingsFromAsset;                           // 0x0020(0x0001)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_1906[0x7];                                     // 0x0021(0x0007)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(LevelSequenceActor_AddBinding) == 0x000008, "Wrong alignment on LevelSequenceActor_AddBinding");
static_assert(sizeof(LevelSequenceActor_AddBinding) == 0x000028, "Wrong size on LevelSequenceActor_AddBinding");
static_assert(offsetof(LevelSequenceActor_AddBinding, Binding) == 0x000000, "Member 'LevelSequenceActor_AddBinding::Binding' has a wrong offset!");
static_assert(offsetof(LevelSequenceActor_AddBinding, Actor) == 0x000018, "Member 'LevelSequenceActor_AddBinding::Actor' has a wrong offset!");
static_assert(offsetof(LevelSequenceActor_AddBinding, bAllowBindingsFromAsset) == 0x000020, "Member 'LevelSequenceActor_AddBinding::bAllowBindingsFromAsset' has a wrong offset!");

// Function LevelSequence.LevelSequenceActor.AddBindingByTag
// 0x0018 (0x0018 - 0x0000)
struct LevelSequenceActor_AddBindingByTag final
{
public:
	class FName                                   BindingTag;                                        // 0x0000(0x0008)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                 Actor;                                             // 0x0008(0x0008)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bAllowBindingsFromAsset;                           // 0x0010(0x0001)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_1907[0x7];                                     // 0x0011(0x0007)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(LevelSequenceActor_AddBindingByTag) == 0x000008, "Wrong alignment on LevelSequenceActor_AddBindingByTag");
static_assert(sizeof(LevelSequenceActor_AddBindingByTag) == 0x000018, "Wrong size on LevelSequenceActor_AddBindingByTag");
static_assert(offsetof(LevelSequenceActor_AddBindingByTag, BindingTag) == 0x000000, "Member 'LevelSequenceActor_AddBindingByTag::BindingTag' has a wrong offset!");
static_assert(offsetof(LevelSequenceActor_AddBindingByTag, Actor) == 0x000008, "Member 'LevelSequenceActor_AddBindingByTag::Actor' has a wrong offset!");
static_assert(offsetof(LevelSequenceActor_AddBindingByTag, bAllowBindingsFromAsset) == 0x000010, "Member 'LevelSequenceActor_AddBindingByTag::bAllowBindingsFromAsset' has a wrong offset!");

// Function LevelSequence.LevelSequenceActor.RemoveBinding
// 0x0020 (0x0020 - 0x0000)
struct LevelSequenceActor_RemoveBinding final
{
public:
	struct FMovieSceneObjectBindingID             Binding;                                           // 0x0000(0x0018)(Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                 Actor;                                             // 0x0018(0x0008)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(LevelSequenceActor_RemoveBinding) == 0x000008, "Wrong alignment on LevelSequenceActor_RemoveBinding");
static_assert(sizeof(LevelSequenceActor_RemoveBinding) == 0x000020, "Wrong size on LevelSequenceActor_RemoveBinding");
static_assert(offsetof(LevelSequenceActor_RemoveBinding, Binding) == 0x000000, "Member 'LevelSequenceActor_RemoveBinding::Binding' has a wrong offset!");
static_assert(offsetof(LevelSequenceActor_RemoveBinding, Actor) == 0x000018, "Member 'LevelSequenceActor_RemoveBinding::Actor' has a wrong offset!");

// Function LevelSequence.LevelSequenceActor.RemoveBindingByTag
// 0x0010 (0x0010 - 0x0000)
struct LevelSequenceActor_RemoveBindingByTag final
{
public:
	class FName                                   Tag;                                               // 0x0000(0x0008)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                 Actor;                                             // 0x0008(0x0008)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(LevelSequenceActor_RemoveBindingByTag) == 0x000008, "Wrong alignment on LevelSequenceActor_RemoveBindingByTag");
static_assert(sizeof(LevelSequenceActor_RemoveBindingByTag) == 0x000010, "Wrong size on LevelSequenceActor_RemoveBindingByTag");
static_assert(offsetof(LevelSequenceActor_RemoveBindingByTag, Tag) == 0x000000, "Member 'LevelSequenceActor_RemoveBindingByTag::Tag' has a wrong offset!");
static_assert(offsetof(LevelSequenceActor_RemoveBindingByTag, Actor) == 0x000008, "Member 'LevelSequenceActor_RemoveBindingByTag::Actor' has a wrong offset!");

// Function LevelSequence.LevelSequenceActor.ResetBinding
// 0x0018 (0x0018 - 0x0000)
struct LevelSequenceActor_ResetBinding final
{
public:
	struct FMovieSceneObjectBindingID             Binding;                                           // 0x0000(0x0018)(Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(LevelSequenceActor_ResetBinding) == 0x000004, "Wrong alignment on LevelSequenceActor_ResetBinding");
static_assert(sizeof(LevelSequenceActor_ResetBinding) == 0x000018, "Wrong size on LevelSequenceActor_ResetBinding");
static_assert(offsetof(LevelSequenceActor_ResetBinding, Binding) == 0x000000, "Member 'LevelSequenceActor_ResetBinding::Binding' has a wrong offset!");

// Function LevelSequence.LevelSequenceActor.SetBinding
// 0x0030 (0x0030 - 0x0000)
struct LevelSequenceActor_SetBinding final
{
public:
	struct FMovieSceneObjectBindingID             Binding;                                           // 0x0000(0x0018)(Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class AActor*>                         Actors;                                            // 0x0018(0x0010)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	bool                                          bAllowBindingsFromAsset;                           // 0x0028(0x0001)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_1908[0x7];                                     // 0x0029(0x0007)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(LevelSequenceActor_SetBinding) == 0x000008, "Wrong alignment on LevelSequenceActor_SetBinding");
static_assert(sizeof(LevelSequenceActor_SetBinding) == 0x000030, "Wrong size on LevelSequenceActor_SetBinding");
static_assert(offsetof(LevelSequenceActor_SetBinding, Binding) == 0x000000, "Member 'LevelSequenceActor_SetBinding::Binding' has a wrong offset!");
static_assert(offsetof(LevelSequenceActor_SetBinding, Actors) == 0x000018, "Member 'LevelSequenceActor_SetBinding::Actors' has a wrong offset!");
static_assert(offsetof(LevelSequenceActor_SetBinding, bAllowBindingsFromAsset) == 0x000028, "Member 'LevelSequenceActor_SetBinding::bAllowBindingsFromAsset' has a wrong offset!");

// Function LevelSequence.LevelSequenceActor.SetBindingByTag
// 0x0020 (0x0020 - 0x0000)
struct LevelSequenceActor_SetBindingByTag final
{
public:
	class FName                                   BindingTag;                                        // 0x0000(0x0008)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class AActor*>                         Actors;                                            // 0x0008(0x0010)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	bool                                          bAllowBindingsFromAsset;                           // 0x0018(0x0001)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_1909[0x7];                                     // 0x0019(0x0007)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(LevelSequenceActor_SetBindingByTag) == 0x000008, "Wrong alignment on LevelSequenceActor_SetBindingByTag");
static_assert(sizeof(LevelSequenceActor_SetBindingByTag) == 0x000020, "Wrong size on LevelSequenceActor_SetBindingByTag");
static_assert(offsetof(LevelSequenceActor_SetBindingByTag, BindingTag) == 0x000000, "Member 'LevelSequenceActor_SetBindingByTag::BindingTag' has a wrong offset!");
static_assert(offsetof(LevelSequenceActor_SetBindingByTag, Actors) == 0x000008, "Member 'LevelSequenceActor_SetBindingByTag::Actors' has a wrong offset!");
static_assert(offsetof(LevelSequenceActor_SetBindingByTag, bAllowBindingsFromAsset) == 0x000018, "Member 'LevelSequenceActor_SetBindingByTag::bAllowBindingsFromAsset' has a wrong offset!");

// Function LevelSequence.LevelSequenceActor.SetReplicatePlayback
// 0x0001 (0x0001 - 0x0000)
struct LevelSequenceActor_SetReplicatePlayback final
{
public:
	bool                                          ReplicatePlayback;                                 // 0x0000(0x0001)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(LevelSequenceActor_SetReplicatePlayback) == 0x000001, "Wrong alignment on LevelSequenceActor_SetReplicatePlayback");
static_assert(sizeof(LevelSequenceActor_SetReplicatePlayback) == 0x000001, "Wrong size on LevelSequenceActor_SetReplicatePlayback");
static_assert(offsetof(LevelSequenceActor_SetReplicatePlayback, ReplicatePlayback) == 0x000000, "Member 'LevelSequenceActor_SetReplicatePlayback::ReplicatePlayback' has a wrong offset!");

// Function LevelSequence.LevelSequenceActor.SetSequence
// 0x0008 (0x0008 - 0x0000)
struct LevelSequenceActor_SetSequence final
{
public:
	class ULevelSequence*                         InSequence;                                        // 0x0000(0x0008)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(LevelSequenceActor_SetSequence) == 0x000008, "Wrong alignment on LevelSequenceActor_SetSequence");
static_assert(sizeof(LevelSequenceActor_SetSequence) == 0x000008, "Wrong size on LevelSequenceActor_SetSequence");
static_assert(offsetof(LevelSequenceActor_SetSequence, InSequence) == 0x000000, "Member 'LevelSequenceActor_SetSequence::InSequence' has a wrong offset!");

// Function LevelSequence.LevelSequenceActor.FindNamedBinding
// 0x0020 (0x0020 - 0x0000)
struct LevelSequenceActor_FindNamedBinding final
{
public:
	class FName                                   Tag;                                               // 0x0000(0x0008)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FMovieSceneObjectBindingID             ReturnValue;                                       // 0x0008(0x0018)(Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(LevelSequenceActor_FindNamedBinding) == 0x000004, "Wrong alignment on LevelSequenceActor_FindNamedBinding");
static_assert(sizeof(LevelSequenceActor_FindNamedBinding) == 0x000020, "Wrong size on LevelSequenceActor_FindNamedBinding");
static_assert(offsetof(LevelSequenceActor_FindNamedBinding, Tag) == 0x000000, "Member 'LevelSequenceActor_FindNamedBinding::Tag' has a wrong offset!");
static_assert(offsetof(LevelSequenceActor_FindNamedBinding, ReturnValue) == 0x000008, "Member 'LevelSequenceActor_FindNamedBinding::ReturnValue' has a wrong offset!");

// Function LevelSequence.LevelSequenceActor.FindNamedBindings
// 0x0018 (0x0018 - 0x0000)
struct LevelSequenceActor_FindNamedBindings final
{
public:
	class FName                                   Tag;                                               // 0x0000(0x0008)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FMovieSceneObjectBindingID>     ReturnValue;                                       // 0x0008(0x0010)(ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm, NativeAccessSpecifierPublic)
};
static_assert(alignof(LevelSequenceActor_FindNamedBindings) == 0x000008, "Wrong alignment on LevelSequenceActor_FindNamedBindings");
static_assert(sizeof(LevelSequenceActor_FindNamedBindings) == 0x000018, "Wrong size on LevelSequenceActor_FindNamedBindings");
static_assert(offsetof(LevelSequenceActor_FindNamedBindings, Tag) == 0x000000, "Member 'LevelSequenceActor_FindNamedBindings::Tag' has a wrong offset!");
static_assert(offsetof(LevelSequenceActor_FindNamedBindings, ReturnValue) == 0x000008, "Member 'LevelSequenceActor_FindNamedBindings::ReturnValue' has a wrong offset!");

// Function LevelSequence.LevelSequenceActor.GetSequence
// 0x0008 (0x0008 - 0x0000)
struct LevelSequenceActor_GetSequence final
{
public:
	class ULevelSequence*                         ReturnValue;                                       // 0x0000(0x0008)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(LevelSequenceActor_GetSequence) == 0x000008, "Wrong alignment on LevelSequenceActor_GetSequence");
static_assert(sizeof(LevelSequenceActor_GetSequence) == 0x000008, "Wrong size on LevelSequenceActor_GetSequence");
static_assert(offsetof(LevelSequenceActor_GetSequence, ReturnValue) == 0x000000, "Member 'LevelSequenceActor_GetSequence::ReturnValue' has a wrong offset!");

// Function LevelSequence.LevelSequenceActor.GetSequencePlayer
// 0x0008 (0x0008 - 0x0000)
struct LevelSequenceActor_GetSequencePlayer final
{
public:
	class ULevelSequencePlayer*                   ReturnValue;                                       // 0x0000(0x0008)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(LevelSequenceActor_GetSequencePlayer) == 0x000008, "Wrong alignment on LevelSequenceActor_GetSequencePlayer");
static_assert(sizeof(LevelSequenceActor_GetSequencePlayer) == 0x000008, "Wrong size on LevelSequenceActor_GetSequencePlayer");
static_assert(offsetof(LevelSequenceActor_GetSequencePlayer, ReturnValue) == 0x000000, "Member 'LevelSequenceActor_GetSequencePlayer::ReturnValue' has a wrong offset!");

// Function LevelSequence.LevelSequenceActor.LoadSequence
// 0x0008 (0x0008 - 0x0000)
struct LevelSequenceActor_LoadSequence final
{
public:
	class ULevelSequence*                         ReturnValue;                                       // 0x0000(0x0008)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(LevelSequenceActor_LoadSequence) == 0x000008, "Wrong alignment on LevelSequenceActor_LoadSequence");
static_assert(sizeof(LevelSequenceActor_LoadSequence) == 0x000008, "Wrong size on LevelSequenceActor_LoadSequence");
static_assert(offsetof(LevelSequenceActor_LoadSequence, ReturnValue) == 0x000000, "Member 'LevelSequenceActor_LoadSequence::ReturnValue' has a wrong offset!");

// Function LevelSequence.LevelSequenceBurnInOptions.SetBurnIn
// 0x0018 (0x0018 - 0x0000)
struct LevelSequenceBurnInOptions_SetBurnIn final
{
public:
	struct FSoftClassPath                         InBurnInClass;                                     // 0x0000(0x0018)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(LevelSequenceBurnInOptions_SetBurnIn) == 0x000008, "Wrong alignment on LevelSequenceBurnInOptions_SetBurnIn");
static_assert(sizeof(LevelSequenceBurnInOptions_SetBurnIn) == 0x000018, "Wrong size on LevelSequenceBurnInOptions_SetBurnIn");
static_assert(offsetof(LevelSequenceBurnInOptions_SetBurnIn, InBurnInClass) == 0x000000, "Member 'LevelSequenceBurnInOptions_SetBurnIn::InBurnInClass' has a wrong offset!");

// Function LevelSequence.LevelSequenceBurnIn.SetSettings
// 0x0008 (0x0008 - 0x0000)
struct LevelSequenceBurnIn_SetSettings final
{
public:
	class UObject*                                InSettings;                                        // 0x0000(0x0008)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(LevelSequenceBurnIn_SetSettings) == 0x000008, "Wrong alignment on LevelSequenceBurnIn_SetSettings");
static_assert(sizeof(LevelSequenceBurnIn_SetSettings) == 0x000008, "Wrong size on LevelSequenceBurnIn_SetSettings");
static_assert(offsetof(LevelSequenceBurnIn_SetSettings, InSettings) == 0x000000, "Member 'LevelSequenceBurnIn_SetSettings::InSettings' has a wrong offset!");

// Function LevelSequence.LevelSequenceBurnIn.GetSettingsClass
// 0x0008 (0x0008 - 0x0000)
struct LevelSequenceBurnIn_GetSettingsClass final
{
public:
	TSubclassOf<class ULevelSequenceBurnInInitSettings> ReturnValue;                                       // 0x0000(0x0008)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(LevelSequenceBurnIn_GetSettingsClass) == 0x000008, "Wrong alignment on LevelSequenceBurnIn_GetSettingsClass");
static_assert(sizeof(LevelSequenceBurnIn_GetSettingsClass) == 0x000008, "Wrong size on LevelSequenceBurnIn_GetSettingsClass");
static_assert(offsetof(LevelSequenceBurnIn_GetSettingsClass, ReturnValue) == 0x000000, "Member 'LevelSequenceBurnIn_GetSettingsClass::ReturnValue' has a wrong offset!");

// Function LevelSequence.LevelSequenceDirector.GetBoundActor
// 0x0020 (0x0020 - 0x0000)
struct LevelSequenceDirector_GetBoundActor final
{
public:
	struct FMovieSceneObjectBindingID             ObjectBinding;                                     // 0x0000(0x0018)(Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                 ReturnValue;                                       // 0x0018(0x0008)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(LevelSequenceDirector_GetBoundActor) == 0x000008, "Wrong alignment on LevelSequenceDirector_GetBoundActor");
static_assert(sizeof(LevelSequenceDirector_GetBoundActor) == 0x000020, "Wrong size on LevelSequenceDirector_GetBoundActor");
static_assert(offsetof(LevelSequenceDirector_GetBoundActor, ObjectBinding) == 0x000000, "Member 'LevelSequenceDirector_GetBoundActor::ObjectBinding' has a wrong offset!");
static_assert(offsetof(LevelSequenceDirector_GetBoundActor, ReturnValue) == 0x000018, "Member 'LevelSequenceDirector_GetBoundActor::ReturnValue' has a wrong offset!");

// Function LevelSequence.LevelSequenceDirector.GetBoundActors
// 0x0028 (0x0028 - 0x0000)
struct LevelSequenceDirector_GetBoundActors final
{
public:
	struct FMovieSceneObjectBindingID             ObjectBinding;                                     // 0x0000(0x0018)(Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class AActor*>                         ReturnValue;                                       // 0x0018(0x0010)(Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
};
static_assert(alignof(LevelSequenceDirector_GetBoundActors) == 0x000008, "Wrong alignment on LevelSequenceDirector_GetBoundActors");
static_assert(sizeof(LevelSequenceDirector_GetBoundActors) == 0x000028, "Wrong size on LevelSequenceDirector_GetBoundActors");
static_assert(offsetof(LevelSequenceDirector_GetBoundActors, ObjectBinding) == 0x000000, "Member 'LevelSequenceDirector_GetBoundActors::ObjectBinding' has a wrong offset!");
static_assert(offsetof(LevelSequenceDirector_GetBoundActors, ReturnValue) == 0x000018, "Member 'LevelSequenceDirector_GetBoundActors::ReturnValue' has a wrong offset!");

// Function LevelSequence.LevelSequenceDirector.GetBoundObject
// 0x0020 (0x0020 - 0x0000)
struct LevelSequenceDirector_GetBoundObject final
{
public:
	struct FMovieSceneObjectBindingID             ObjectBinding;                                     // 0x0000(0x0018)(Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UObject*                                ReturnValue;                                       // 0x0018(0x0008)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(LevelSequenceDirector_GetBoundObject) == 0x000008, "Wrong alignment on LevelSequenceDirector_GetBoundObject");
static_assert(sizeof(LevelSequenceDirector_GetBoundObject) == 0x000020, "Wrong size on LevelSequenceDirector_GetBoundObject");
static_assert(offsetof(LevelSequenceDirector_GetBoundObject, ObjectBinding) == 0x000000, "Member 'LevelSequenceDirector_GetBoundObject::ObjectBinding' has a wrong offset!");
static_assert(offsetof(LevelSequenceDirector_GetBoundObject, ReturnValue) == 0x000018, "Member 'LevelSequenceDirector_GetBoundObject::ReturnValue' has a wrong offset!");

// Function LevelSequence.LevelSequenceDirector.GetBoundObjects
// 0x0028 (0x0028 - 0x0000)
struct LevelSequenceDirector_GetBoundObjects final
{
public:
	struct FMovieSceneObjectBindingID             ObjectBinding;                                     // 0x0000(0x0018)(Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class UObject*>                        ReturnValue;                                       // 0x0018(0x0010)(Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
};
static_assert(alignof(LevelSequenceDirector_GetBoundObjects) == 0x000008, "Wrong alignment on LevelSequenceDirector_GetBoundObjects");
static_assert(sizeof(LevelSequenceDirector_GetBoundObjects) == 0x000028, "Wrong size on LevelSequenceDirector_GetBoundObjects");
static_assert(offsetof(LevelSequenceDirector_GetBoundObjects, ObjectBinding) == 0x000000, "Member 'LevelSequenceDirector_GetBoundObjects::ObjectBinding' has a wrong offset!");
static_assert(offsetof(LevelSequenceDirector_GetBoundObjects, ReturnValue) == 0x000018, "Member 'LevelSequenceDirector_GetBoundObjects::ReturnValue' has a wrong offset!");

// Function LevelSequence.LevelSequenceDirector.GetSequence
// 0x0008 (0x0008 - 0x0000)
struct LevelSequenceDirector_GetSequence final
{
public:
	class UMovieSceneSequence*                    ReturnValue;                                       // 0x0000(0x0008)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(LevelSequenceDirector_GetSequence) == 0x000008, "Wrong alignment on LevelSequenceDirector_GetSequence");
static_assert(sizeof(LevelSequenceDirector_GetSequence) == 0x000008, "Wrong size on LevelSequenceDirector_GetSequence");
static_assert(offsetof(LevelSequenceDirector_GetSequence, ReturnValue) == 0x000000, "Member 'LevelSequenceDirector_GetSequence::ReturnValue' has a wrong offset!");

// Function LevelSequence.LevelSequenceMediaController.SynchronizeToServer
// 0x0004 (0x0004 - 0x0000)
struct LevelSequenceMediaController_SynchronizeToServer final
{
public:
	float                                         DesyncThresholdSeconds;                            // 0x0000(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(LevelSequenceMediaController_SynchronizeToServer) == 0x000004, "Wrong alignment on LevelSequenceMediaController_SynchronizeToServer");
static_assert(sizeof(LevelSequenceMediaController_SynchronizeToServer) == 0x000004, "Wrong size on LevelSequenceMediaController_SynchronizeToServer");
static_assert(offsetof(LevelSequenceMediaController_SynchronizeToServer, DesyncThresholdSeconds) == 0x000000, "Member 'LevelSequenceMediaController_SynchronizeToServer::DesyncThresholdSeconds' has a wrong offset!");

// Function LevelSequence.LevelSequenceMediaController.GetMediaComponent
// 0x0008 (0x0008 - 0x0000)
struct LevelSequenceMediaController_GetMediaComponent final
{
public:
	class UMediaComponent*                        ReturnValue;                                       // 0x0000(0x0008)(ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(LevelSequenceMediaController_GetMediaComponent) == 0x000008, "Wrong alignment on LevelSequenceMediaController_GetMediaComponent");
static_assert(sizeof(LevelSequenceMediaController_GetMediaComponent) == 0x000008, "Wrong size on LevelSequenceMediaController_GetMediaComponent");
static_assert(offsetof(LevelSequenceMediaController_GetMediaComponent, ReturnValue) == 0x000000, "Member 'LevelSequenceMediaController_GetMediaComponent::ReturnValue' has a wrong offset!");

// Function LevelSequence.LevelSequenceMediaController.GetSequence
// 0x0008 (0x0008 - 0x0000)
struct LevelSequenceMediaController_GetSequence final
{
public:
	class ALevelSequenceActor*                    ReturnValue;                                       // 0x0000(0x0008)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(LevelSequenceMediaController_GetSequence) == 0x000008, "Wrong alignment on LevelSequenceMediaController_GetSequence");
static_assert(sizeof(LevelSequenceMediaController_GetSequence) == 0x000008, "Wrong size on LevelSequenceMediaController_GetSequence");
static_assert(offsetof(LevelSequenceMediaController_GetSequence, ReturnValue) == 0x000000, "Member 'LevelSequenceMediaController_GetSequence::ReturnValue' has a wrong offset!");

}
