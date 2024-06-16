#pragma once

 

// Package: UMGSequencer

#include "Basic.hpp"

#include "MovieScene_classes.hpp"


namespace SDK
{

// Class UMGSequencer.MovieSceneUMGSection
// 0x0018 (0x0100 - 0x00E8)
class UMovieSceneUMGSection final : public UMovieSceneSection
{
public:
	class UUserWidget*                            Widget;                                            // 0x00E8(0x0008)(Edit, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                         ZOrder;                                            // 0x00F0(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                   AnimationName;                                     // 0x00F4(0x0008)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_1D11[0x4];                                     // 0x00FC(0x0004)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"MovieSceneUMGSection">();
	}
	static class UMovieSceneUMGSection* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMovieSceneUMGSection>();
	}
};
static_assert(alignof(UMovieSceneUMGSection) == 0x000008, "Wrong alignment on UMovieSceneUMGSection");
static_assert(sizeof(UMovieSceneUMGSection) == 0x000100, "Wrong size on UMovieSceneUMGSection");
static_assert(offsetof(UMovieSceneUMGSection, Widget) == 0x0000E8, "Member 'UMovieSceneUMGSection::Widget' has a wrong offset!");
static_assert(offsetof(UMovieSceneUMGSection, ZOrder) == 0x0000F0, "Member 'UMovieSceneUMGSection::ZOrder' has a wrong offset!");
static_assert(offsetof(UMovieSceneUMGSection, AnimationName) == 0x0000F4, "Member 'UMovieSceneUMGSection::AnimationName' has a wrong offset!");

// Class UMGSequencer.MovieSceneUMGTrack
// 0x0018 (0x00A8 - 0x0090)
class UMovieSceneUMGTrack final : public UMovieSceneNameableTrack
{
public:
	uint8                                         Pad_1D12[0x8];                                     // 0x0090(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class UMovieSceneSection*>             Sections;                                          // 0x0098(0x0010)(ExportObject, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPrivate)

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"MovieSceneUMGTrack">();
	}
	static class UMovieSceneUMGTrack* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMovieSceneUMGTrack>();
	}
};
static_assert(alignof(UMovieSceneUMGTrack) == 0x000008, "Wrong alignment on UMovieSceneUMGTrack");
static_assert(sizeof(UMovieSceneUMGTrack) == 0x0000A8, "Wrong size on UMovieSceneUMGTrack");
static_assert(offsetof(UMovieSceneUMGTrack, Sections) == 0x000098, "Member 'UMovieSceneUMGTrack::Sections' has a wrong offset!");

}

