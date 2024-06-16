#pragma once

 

// Package: UMGSequencer

#include "Basic.hpp"

#include "MovieScene_structs.hpp"


namespace SDK
{

// ScriptStruct UMGSequencer.MovieSceneUMGSectionTemplate
// 0x0008 (0x0028 - 0x0020)
struct FMovieSceneUMGSectionTemplate final : public FMovieSceneEvalTemplate
{
public:
	class UMovieSceneUMGSection*                  Section;                                           // 0x0020(0x0008)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
};
static_assert(alignof(FMovieSceneUMGSectionTemplate) == 0x000008, "Wrong alignment on FMovieSceneUMGSectionTemplate");
static_assert(sizeof(FMovieSceneUMGSectionTemplate) == 0x000028, "Wrong size on FMovieSceneUMGSectionTemplate");
static_assert(offsetof(FMovieSceneUMGSectionTemplate, Section) == 0x000020, "Member 'FMovieSceneUMGSectionTemplate::Section' has a wrong offset!");

}

