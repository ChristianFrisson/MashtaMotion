// ****************************************************************************************
//
// Posture Recognizers
// ---------------------------------------------------------
// Copyright (C) 2010-2013 Felix Kistler 
// 
// This software is distributed under the terms of the Eclipse Public License v1.0.
// A copy of the license may be obtained at: http://www.eclipse.org/org/documents/epl-v10.html
// 
// ****************************************************************************************

#pragma once

#include "IGestureRecognizer.h"

class HandsFrontTogetherRecognizer : public IGestureRecognizer
{
public:
	virtual ~HandsFrontTogetherRecognizer() {}

	virtual Fubi::RecognitionResult::Result recognizeOn(FubiUser* user);
	virtual IGestureRecognizer* clone() { return new HandsFrontTogetherRecognizer(*this); }
};