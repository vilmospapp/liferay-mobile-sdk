/**
 * Copyright (c) 2000-2013 Liferay, Inc. All rights reserved.
 *
 * This library is free software; you can redistribute it and/or modify it under
 * the terms of the GNU Lesser General Public License as published by the Free
 * Software Foundation; either version 2.1 of the License, or (at your option)
 * any later version.
 *
 * This library is distributed in the hope that it will be useful, but WITHOUT
 * ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS
 * FOR A PARTICULAR PURPOSE. See the GNU Lesser General Public License for more
 * details.
 */

package com.liferay.mobile.sdk.test.plugin;

import com.liferay.mobile.android.v62.syncdlobject.SyncDLObjectService;
import com.liferay.mobile.sdk.test.BaseTest;

import java.io.IOException;

import org.json.JSONArray;
import org.json.JSONObject;

import org.junit.Test;

import static org.junit.Assert.*;

/**
 * @author Bruno Farache
 */
public class SyncWebServiceTest extends BaseTest {

	public SyncWebServiceTest() throws IOException {
		super();
	}

	@Test
	public void getUserSitesGroups() throws Exception {
		SyncDLObjectService service = new SyncDLObjectService(session);

		JSONArray jsonArray = service.getUserSitesGroups();

		assertEquals(2, jsonArray.length());

		for (int i = 0; i < jsonArray.length(); i++) {
			JSONObject jsonObj = jsonArray.getJSONObject(i);

			String name = jsonObj.getString("name");

			if (name.equals("Guest")) {
				String friendlyURL = jsonObj.getString("friendlyURL");

				assertEquals("/guest", friendlyURL);
			}
		}
	}

}